#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "First letters: ";

    if (!str.empty() && str[0] != ' ')
        cout << str[0] << " ";

    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == ' ' && str[i] != ' ')
            cout << str[i] << " ";
    }

    cout << endl;
    return 0;
}

