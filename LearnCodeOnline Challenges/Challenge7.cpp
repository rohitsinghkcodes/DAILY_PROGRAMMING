// Challenge 7: Calculate (12,00,000*365) without *,/,bitwise operator or loop.

#include<iostream>
using namespace std;

int cal(int v,int n)
{
    if(v==0||n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return v ;
    }
    if (v==1)
    {
        return n;
    }
 return v+cal(v,n-1);
}

int main()
{
    int n,ans,t;
    cout<<"Enter the no of days"<<endl;
    cin>>n;
    cout<<"Enter value="<<endl;
    cin>>t;
    ans=cal(t,n);
    cout<<"Total no of persons: "<<ans<<endl;
    return 0;
}
