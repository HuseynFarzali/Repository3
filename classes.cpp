#include <iostream>

class Three_Dimensional_Euclidean_Point {
    private:
        double _r1, _r2, _r3;
    
    public:
        double Norm() { return sqrt(_r1 * _r1 + _r2 * _r2 + _r3 * _r3); }
}