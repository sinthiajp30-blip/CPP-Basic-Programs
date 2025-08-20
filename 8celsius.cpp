#include <iostream>
using namespace std;

int main() {
    float f, c;
    cout << "Enter F: ";
    cin >> f;
    c = (f - 32) / 9 * 5;
    cout << "The result is: " << c << endl;

    return 0;
}

