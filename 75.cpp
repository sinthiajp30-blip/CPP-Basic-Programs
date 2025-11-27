#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter " << n1 << " elements:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter " << n2 << " elements:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Common elements: ";
    bool found = false;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN;
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "No common elements found.";
    }

    cout << endl;
    return 0;
}
