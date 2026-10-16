// Vector {Day 3}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(20);
    vec.push_back(25);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
    

}