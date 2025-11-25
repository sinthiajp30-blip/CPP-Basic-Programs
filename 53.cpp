#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void printPrimesInRange(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int low, high;
    cout << "Enter the lower bound: ";
    cin >> low;
    cout << "Enter the upper bound: ";
    cin >> high;

    printPrimesInRange(low, high);

    return 0;
}

