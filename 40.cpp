// Pointers
#include <iostream>
using namespace std;

int main() {
    int num =5;
      cout << "The value of num is: " << num << endl;
         cout << "The address of num is: " << &num << endl;   // & is the address-of operator
        int *ptr = &num; // pointer variable that stores the address of num
        cout << "The value of ptr is: " << ptr << endl;
        return 0;
}