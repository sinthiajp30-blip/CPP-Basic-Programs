#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

int main() {
    Complex num1, num2, sum;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> num1.real >> num1.imag;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> num2.real >> num2.imag;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}

