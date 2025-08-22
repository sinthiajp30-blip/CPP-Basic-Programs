#include <iostream>
using namespace std;

int main() {
    char c;

    cout << "Enter a character: ";
    cin >> c;

   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << c << " is a vowel." << endl;
    } else if ((c >= 'a' && c <= 'z')) {
        cout << c << " is a consonant." << endl;
    } else {
        cout << "Invalid input. Please enter an alphabetic character." << endl;
    }

    return 0;
}
