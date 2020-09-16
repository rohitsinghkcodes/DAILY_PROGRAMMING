#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL int
using namespace std;


int  myXOR(LL x, LL y) 
{ 
   return (x & (~y)) | ((~x )& y); 
} 

int fib(LL x, LL a, LL b)

{
    if(x==0)
    {
        return a;
    }
    else if(x==1)
    {
        return b;
    }
    return myXOR(fib(x-1,a,b),fib(x-2,a,b));
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        LL a,b,n;
        cin>>a>>b>>n;
        cout<<fib(n,a,b)<<endl;
    }
    return 0;
}