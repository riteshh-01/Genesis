// Spiral Print in 2D Array
#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 4;

void printSpiral(int matrix[ROWS][COLS], int m, int n) {
    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    while (top <= bottom && left <= right) {
        // 1. Traverse from left to right along the top row
        for (int i = left; i <= right; ++i) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // 2. Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; ++i) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // 3. Traverse from right to left along the bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // 4. Traverse from bottom to top along the left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
}

int main() {
    int matrix[ROWS][COLS] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:\n";
    for(int i = 0; i < ROWS; ++i) {
        for(int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nSpiral Traversal: ";
    printSpiral(matrix, ROWS, COLS);

    return 0;
}