#include <iostream>
using namespace std;

int main() {
    u32string text = U"Hello World";

    int index;
    cout << "Enter index: ";
    cin >> index;

    if (index < 0 || index >= text.size()) {
        cout << "Index out of range!" << endl;
        return 0;
    }

    char32_t codePoint = text[index];

    cout << "Character: ";
    cout << (char)text[index] << endl;
    cout << "Unicode code point: U+"
         << hex << uppercase << (int)codePoint << endl;

    return 0;
}

