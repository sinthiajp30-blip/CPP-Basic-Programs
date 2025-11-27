#include <iostream>
using namespace std;

int main() {
    int n, element;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to remove: ";
    cin >> element;

    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != element) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    if (newSize == 0) {
        cout << "All elements were removed. Array is empty." << endl;
    } else {
        cout << "Array after removing " << element << ": ";
        for (int i = 0; i < newSize; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

