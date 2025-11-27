
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    cout << "Boundary elements of the matrix: ";
    for (int j = 0; j < cols; j++)
        cout << matrix[0][j] << " ";
    for (int i = 1; i < rows - 1; i++)
        cout << matrix[i][cols - 1] << " ";
    if (rows > 1) {
        for (int j = cols - 1; j >= 0; j--)
            cout << matrix[rows - 1][j] << " ";
    }
    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--)
            cout << matrix[i][0] << " ";
    }

    cout << endl;

    return 0;
}
