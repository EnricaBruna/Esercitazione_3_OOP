#include "src/ComplexNumber.hpp"
#include <iostream>

using namespace std;
using namespace ComplexLibrary;

int main()
{

    ComplexNum c1 = ComplexNum(3.2, -5.6);
    ComplexNum c2 = ComplexNum(-2.4, 2.9);
    cout << "The first complex number is " << c1 << endl;
    cout << "The second complex number is " << c2 << endl;

    ComplexNum sum1 = c1 + c2;
    cout << "The sum of the two complex numbers is " << sum1 << endl;

    double d = 1.25;
    ComplexNum sum2 = c1 + d;
    cout<< "The sum of the first complex number with the double number " << d << " is " << sum2 << endl;

    if (c1 == c2)
        cout << "The two complex numbers are equal." << endl;
    else
        cout << "The two complex numbers are not equal." << endl;

    ComplexNum conj1 = conjugate(c1);
    ComplexNum conj2 = conjugate(c2);
    cout << "The conjugate of " << c1 << " is " << conj1 << endl;
    cout << "The conjugate of " << c2 << " is " << conj2 << endl;

    return 0;

}

