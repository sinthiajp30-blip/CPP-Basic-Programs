#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float p, r, t, A, CI;

    cout << "Enter Principal amount: ";
    cin >> p;

    cout << "Enter the rate: ";
    cin >> r;

    cout << "Enter the time: ";
    cin >> t;

    A = p * pow((1 + r / 100), t);
    CI = A - p;

    cout << "CompoundInterest = " << CI << endl;
    cout << "Total Amount = " << A << endl;

    return 0;
}

