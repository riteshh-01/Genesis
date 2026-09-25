// Column wise Sum in 2D Array
#include <iostream>
using namespace std;

void printcolSum(int arr[][3],int row,int col){
    for(int j=0 ; j<col ; j++){
        int sum = 0;
        for(int i=0 ; i<row ; i++){
            sum += arr[i][j];
        }
        cout << "Sum of column " << j << " is: " << sum << endl;
    }
}
int main(){
    int arr[3][3];
    cout << "Enter the elements of 3x3 array: " << endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printcolSum(arr,3,3);
    return 0;
}