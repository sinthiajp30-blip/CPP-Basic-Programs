#include <iostream>
using namespace std;

int main() {
    float p, r, t, SimpleInterest;

    cout << "Enter the amount of principle: ";
    cin >> p;

    cout << "Enter the rate: ";
    cin >> r;

    cout << "Enter the time: ";
    cin >> t;

    SimpleInterest = (p * r * t) / 100;

    cout << "SimpleInterest = " << SimpleInterest << endl;

    return 0;
}

