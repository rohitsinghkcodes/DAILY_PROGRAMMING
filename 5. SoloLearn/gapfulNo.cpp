#include<iostream>
using namespace std;
int main()
{
    int n,a,x,newNo;
    cout<<"Enter the no: ";
    cin>>n;
    a = n%10;
    x = n/100;
    newNo = (x*10)+a;
    cout<<"The ans is: "<<n/newNo<<endl;      
    return 0;
}