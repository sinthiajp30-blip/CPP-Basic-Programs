#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool letters[26] = {false};
    for (char c : str) {
        if (isalpha(c)) {
            c = tolower(c);
            letters[c - 'a'] = true;
        }
    }
    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            isPangram = false;
            break;
        }
    }

    if (isPangram)
        cout << "The string is a pangram." << endl;
    else
        cout << "The string is NOT a pangram." << endl;

    return 0;
}

