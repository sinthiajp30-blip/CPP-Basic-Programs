
#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    switch (isPrime) {
        case true:
            cout << n << " is a prime number." << endl;
            break;
        case false:
            cout << n << " is not a prime number." << endl;
            break;
    }

    return 0;
}
