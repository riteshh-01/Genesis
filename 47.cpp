// Dynamic Allocation {Reference  Variables}
#include <iostream>
using namespace std;
int main(){
    
    int i = 7;
    int &t = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    t++;
    cout << i << endl;
    cout << t << endl;

    return 0;
}
