
#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    int sum = sumOfNaturalNumbers(n);
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
