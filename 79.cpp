#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int mat1[rows][cols], mat2[rows][cols];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }
    bool equal = true;
    for (int i = 0; i < rows && equal; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                equal = false;
                break;
            }
        }
    }

    if (equal) {
        cout << "The two matrices are equal." << endl;
    } else {
        cout << "The two matrices are not equal." << endl;
    }

    return 0;
}

