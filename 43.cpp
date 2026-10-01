// Pointers With Arrays
#include <iostream>
using namespace std;

int main() {
    int arr[10] ={2,6,8,76,64,887};
    cout <<arr[0]<<endl;
    cout << " Address of first memory block: " << &arr[0] << endl;
    cout << "4th\t" <<  *arr << endl;
    cout << "5th\t" <<  *arr + 1 << endl;
    cout << "6th\t" <<   *(arr + 1) << endl;
    int i=4;
    cout  << i[arr] << endl;
    cout << "->" << &arr[0] << endl;
    int *p = &arr[0];
    cout << "->"<< &p << endl;
     // arr=arr+1; // This line will cause a compilation error because you cannot assign to an array name.
    int *ptr = &arr[1];
    cout << "-->"<< *ptr << endl;
    cout<<"--->" << ptr << endl;
    ptr=ptr+1;
    cout <<"---->" << ptr << endl;



    return 0;
}
