#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are:\n";

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}

