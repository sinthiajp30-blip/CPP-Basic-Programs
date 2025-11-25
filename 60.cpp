#include <iostream>
using namespace std;
double power(double a, int b) {
    if (b == 0)
        return 1;
    if (b > 0)
        return a * power(a, b - 1);
    else
        return 1 / power(a, -b);
}

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}

