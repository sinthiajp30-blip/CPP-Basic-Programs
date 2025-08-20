#include <iostream>
using namespace std;

int main() {
    float length, width, area, perimeter;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the width: ";
    cin >> width;

    area = length * width;
    perimeter =(length + width) * 2;

    cout << "Area of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;
}

