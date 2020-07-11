//29-05-2020
#include<iostream>
using namespace std;
int check(long long n)
{
    int a,count=0;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        if(a==4||a==7)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    long long n;
    cin>>n;
    int res = check(n);
    if(res==4||res==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}