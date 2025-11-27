#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(const string &str) {
    unordered_map<char, int> freq;
    for (char ch : str) {
        freq[ch]++;
    }

    for (char ch : str) {
        if (freq[ch] == 1) {
            return ch;
        }
    }

    return '\0';
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    char result = firstNonRepeatingChar(input);

    if (result != '\0') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}

