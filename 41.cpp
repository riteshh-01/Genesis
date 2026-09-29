// Checking Size of Pointer 
#include <iostream>
using namespace std;    

int main(){
    int num =5;
      cout << "The value of num is: " << num << endl;
         cout << "The address of num is: " << &num << endl;   // & is the address-of operator
        int *ptr = &num; // pointer variable that stores the address of num
        cout << "The value of ptr is: " << ptr << endl;
        double d = 4.5;  
        double *ptr2 = &d; // pointer variable that stores the address of d
        cout << "The value of d is: " << d << endl;
        cout << "The address of d is: " << &d << endl; 
        cout << "The value of ptr2 is: " << ptr2 << endl;
        cout << "Size of int pointer: " << sizeof(ptr) << " bytes" << endl;
        cout << "Size of double pointer: " << sizeof(ptr2) << " bytes" << endl;
        return 0;
}
