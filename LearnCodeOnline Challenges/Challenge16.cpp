//Chalenge 16: sum of digits of a number

#include<iostream>
using namespace std;

int main()
{
    int n,a,count=0;
    cout<<"Enter the no= ";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        count+=a;
    }
    cout<<"The sum is= "<<count<<endl;
    return 0;
}