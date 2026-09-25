// Wave Print
#include <iostream>
using namespace std;

void wavePrint(int arr[][3], int row, int col) {
    for (int j = 0; j < col; j++) {
        if (j % 2 == 0) {
            // Printing top to bottom
            for (int i = 0; i < row; i++) {                        
                cout << arr[i][j] << " ";
            }
        } else {
            // Printing bottom to top
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {
    int arr[3][3];
    cout << "Enter the elements of 3x3 array: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Wave Print: ";
    wavePrint(arr, 3, 3);
    return 0;
}