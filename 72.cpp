#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == 0 || n == 1) {
        cout << "Array after removing duplicates: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        return 0;
    }

    int temp[n];
    int j = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < j; i++) {
        cout << temp[i] << " ";
    }

    cout << endl;
    return 0;
}

