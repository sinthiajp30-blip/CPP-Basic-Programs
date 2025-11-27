#include <iostream>
#include <vector>
using namespace std;
void leftRotate(vector<int> &arr, int d) {
    int n = arr.size();
    d = d % n;
    vector<int> temp(d);
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n, d;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of positions to rotate: ";
    cin >> d;

    leftRotate(arr, d);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

