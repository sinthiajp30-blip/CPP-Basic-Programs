#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, result;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    result = str1 + str2;
    cout << "Concatenated string (using +): " << result << endl;

    str1.append(str2);
    cout << "Concatenated string (using append): " << str1 << endl;

    return 0;
}

