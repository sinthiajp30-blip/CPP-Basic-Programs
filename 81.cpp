#include <iostream>
#include <vector>
using namespace std;
void getCofactor(vector<vector<int>> &matrix, vector<vector<int>> &temp, int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = matrix[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int determinant(vector<vector<int>> &matrix, int n) {
    if (n == 1)
        return matrix[0][0];

    if (n == 2)
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];

    int det = 0;
    int sign = 1;
    vector<vector<int>> temp(n, vector<int>(n));

    for (int f = 0; f < n; f++) {
        getCofactor(matrix, temp, 0, f, n);
        det += sign * matrix[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return det;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    int det = determinant(matrix, n);
    cout << "Determinant of the matrix is: " << det << endl;

    return 0;
}

