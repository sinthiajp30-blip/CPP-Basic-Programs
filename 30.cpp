#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;
    int n = num;
    while (n > 0) {
        digits++;
        n /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int start, end;

    cout << "Enter start of interval: ";
    cin >> start;
    cout << "Enter end of interval: ";
    cin >> end;

    cout << "\nArmstrong numbers between " << start << " and " << end << ":\n";

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

