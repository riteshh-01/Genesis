// Bubble Sort Algorithm
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i= 1; i<n; i++)
    {
      for(int j=0; j<n-i; j++){
        if(arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j+1]);
        }
      }
    }
}
 int main(){
    int arr[7] = {10, 4, 1, 3, 5, 7, 2};
    bubbleSort(arr, 7);
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
 }