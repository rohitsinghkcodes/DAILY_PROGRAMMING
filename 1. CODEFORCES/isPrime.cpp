#include<iostream>
using namespace std;

int isPrime(int val)
{
    bool c = true;
    for(int i=2;i<val;i++)
    {
        if(val%i==0)
        {
            c = false;
            break;
        }
    }
    if(c==true)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       cout<<isPrime(i)<<"-"<<i<<endl;
    }
    return 0;
}