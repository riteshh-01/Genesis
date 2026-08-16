// Second Largest Element
#include <iostream>
#include <climits>

using namespace std;

int findSecondLargest(const int arr[], int size) {
    if (size < 2) {
        return INT_MIN; 
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, size);

    if (result == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}