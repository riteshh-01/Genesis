#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        sum+=i;
    }
    cout<<"Sum of natural numbers: "<<sum<<endl;
    
}