// Reference  Variables Day 2
#include <iostream>
using namespace std;

void update(int &x){
    x++;
}
int main(){
    int i = 7;
    cout << i << endl;
    update(i);
    cout << i << endl;

    return 0;
}