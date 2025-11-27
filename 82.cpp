#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    double matrix[n][n];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    double trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }
    double norm = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            norm += matrix[i][j] * matrix[i][j];
        }
    }
    norm = sqrt(norm);

    cout << "Trace of the matrix: " << trace << endl;
    cout << "Frobenius Norm of the matrix: " << norm << endl;

    return 0;
}

