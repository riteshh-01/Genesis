// Insertion Sort
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0 && arr[j] > temp; j--){
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}

int main(){
    int arr[20] ={142, 8, 189, 73, 115, 29, 164, 51, 97, 180, 12, 134, 68, 193, 44, 106, 88, 157, 23, 171};
    int n = 20;
    insertionSort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}