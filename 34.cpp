#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end;

    cout << "Enter start of interval: ";
    cin >> start;
    cout << "Enter end of interval: ";
    cin >> end;

    cout << "\nPrime numbers between " << start << " and " << end << ":\n";

    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << endl;
    return 0;
}

