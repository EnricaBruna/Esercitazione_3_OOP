#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>
using namespace std;
namespace ComplexLibrary{

ostream& operator<<(ostream& os, const ComplexNum &c)
{
    if ((c.imaginary >= 1.11e-16) && (fabs(c.real) >= 1.11e-16))
        os << c.real << "+" << c.imaginary << "i";
    else if ((c.imaginary <= -1.11e-16) && (fabs(c.real) >= 1.11e-16))
        os << c.real << "-" << -c.imaginary << "i";
    else if ((fabs(c.imaginary) < 1.11e-16) && (fabs(c.real) >= 1.11e-16))
        os << c.real;
    else if ((fabs(c.imaginary) >= 1.11e-16) && (fabs(c.real) < 1.11e-16))
        os << c.imaginary << "i";
    else
        os << "0";
    return os;
}

ComplexNum operator+(const ComplexNum &c1, const ComplexNum &c2)
{
    double rl1 = c1.real + c2.real;
    double im1 = c1.imaginary + c2.imaginary;
    ComplexNum sum1(rl1, im1);
    return sum1;
}

ComplexNum operator+(const ComplexNum &c2, const double &d1)
{
    double rl2 = d1 + c2.real;
    double im2 = c2.imaginary;
    ComplexNum sum2(rl2, im2);
    return sum2;
}

bool operator==(const ComplexNum &c1, const ComplexNum &c2)
{
    if ((fabs(c1.real - c2.real) < 1.11e-16) && (fabs(c1.imaginary - c2.imaginary) < 1.11e-16))
        return true;
    else
        return false;
}

ComplexNum conjugate( const ComplexNum &c1)
{
    double rl3 = c1.real;
    double im3 = - c1.imaginary;
    ComplexNum c2 = ComplexNum(rl3, im3);
    return c2;
}

};

