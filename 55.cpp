#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n/2; i++) {
        int j = n - i;
        if (isPrime(i) && isPrime(j)) {
            cout << n << " = " << i << " + " << j << endl;
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (!isSumOfTwoPrimes(num))
        cout << num << " cannot be expressed as sum of two prime numbers." << endl;

    return 0;
}

