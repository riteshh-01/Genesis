// Reverse of an Array
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int s=0, e=n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main(){
    int arr[7]={67,4,46,232,656,13,31};
    int n=7;
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}