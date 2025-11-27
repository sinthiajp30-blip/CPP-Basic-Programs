#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }


    for (int j = 0; j < cols; j++) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[rows-1][j];
        matrix[rows-1][j] = temp;
    }


    cout << "Matrix after swapping first and last elements of each column:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

