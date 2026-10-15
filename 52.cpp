// Vector {Day 2}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout << "Size of vector is: " << vec.size() << endl;
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);
    cout << "After push back, size of vector is: " << vec.size() << endl;

    vec.pop_back();
    cout << "After pop back, size of vector is: " << vec.size() << endl;
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << endl;
    }
    return 0;
}