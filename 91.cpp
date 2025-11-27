#include <iostream>
#include <string>
using namespace std;

string addBinaryStrings(const string &a, const string &b) {
    string result = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        carry = sum / 2;
        result = char((sum % 2) + '0') + result;
    }

    return result;
}

int main() {
    string bin1, bin2;

    cout << "Enter the first binary string: ";
    cin >> bin1;

    cout << "Enter the second binary string: ";
    cin >> bin2;

    string sum = addBinaryStrings(bin1, bin2);

    cout << "Sum of the binary strings: " << sum << endl;

    return 0;
}

