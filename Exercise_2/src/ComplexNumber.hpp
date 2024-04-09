#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>

using namespace std;

namespace ComplexLibrary{

struct ComplexNum
{
    double real;
    double imaginary;

    ComplexNum() = default;

    ComplexNum(double a, double b):
        real(a),
        imaginary(b)
    {}

};

ostream& operator<<(ostream& os, const ComplexNum &c);
ComplexNum operator+(const ComplexNum &c1, const ComplexNum &c2);
ComplexNum operator+(const ComplexNum &c2, const double &d1);
bool operator==(const ComplexNum &c1, const ComplexNum &c2);
ComplexNum conjugate( const ComplexNum &c1);

};

#endif
