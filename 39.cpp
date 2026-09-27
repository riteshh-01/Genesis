// Rotating a 2D matrix by 90 degrees
#include <iostream>
using namespace std;

const int N = 4;

void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}

void rotate90Clockwise(int mat[N][N]) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Step 2: Reverse each row horizontally
    for (int i = 0; i < N; ++i) {
        int left = 0;
        int right = N - 1;
        while (left < right) {
            
            int temp = mat[i][left];
            mat[i][left] = mat[i][right];
            mat[i][right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    // Initialize a standard C-style 2D array
    int matrix[N][N] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotate90Clockwise(matrix);

    cout << "\nMatrix rotated by 90 degrees clockwise:\n";
    printMatrix(matrix);

    return 0;
}