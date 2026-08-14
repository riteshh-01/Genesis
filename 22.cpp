#include<iostream>
using namespace std;


int search(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i; 
        }
    }
    return -1; 
}

int main() 
{
    // 1. Define your array and key here
    int arr[] = {2, 6, 3, 9, 1}; 
    int key = 3;
    
    // 2. Calculate the number of elements (n) in the array
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    // 3. Call the search function and store the result
    int result = search(arr, n, key);
    
    // 4. Print the output
    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    
    return 0;
}