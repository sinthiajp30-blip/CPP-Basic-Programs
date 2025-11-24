#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 1000 are:\n";

    for (int num = 1; num <= 1000; num++) {
        int sum = 0, temp = num;
        int digits = 0;

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

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}

