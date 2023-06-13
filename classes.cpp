#include <iostream>

class Three_Dimensional_Euclidean_Point {
    private:
        double _r1, _r2, _r3;
    
    public:
        Three_Dimensional_Euclidean_Point(double r1, double r2, double r3) {
            _r1 = r1; _r2 = r2; _r3 = r3;
        }

        double Norm() { return sqrt(_r1 * _r1 + _r2 * _r2 + _r3 * _r3); }

        double vectorProduct(Three_Dimensional_Euclidean_Point& p) {
            double r1 = this->r2 * p._r3 - this->_r3 * p._r2;
            double r2 = -(this->_r1 * p._r3 - this->_r3 * p._r1);
            double r3 = this->_r1 * p._r2 + this->_r2 * p._r1;

            return Three_Dimensional_Euclidean_Point(r1, r2, r3);
        }
}