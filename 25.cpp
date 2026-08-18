// finding missing number in an array
#include <iostream>

using namespace std;

int findMissingNumberSum(const int arr[], int n) 
{
    long long expected_sum = (long long)n * (n + 1) / 2;
    long long actual_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        actual_sum += arr[i];
    }

    return expected_sum - actual_sum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;

    int missing = findMissingNumberSum(arr, n);
    cout << "The missing number is: " << missing << endl;

    return 0;
}