//31-05-2020
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int c;
int cal(double n1,double n2)
{
    double a,b;
    int i=0,val=0;
    while(n1>0||n2>0)
    {
        c++;
        a=n1%10;
        b=n2%10;
        n1/=10;
        n2/=10;
        if(a!=b)
        {
            val=(val*(pow(10,i)))+1;
        }
        i++;
    }
    return val;
}
int len(double x)
{
    int ct;
    while(x>0)
    {
        ct++;
        x--;
    }
    return ct;
}
int main()
{
    double n1,n2;
    cin>>n1>>n2;
    double ans=cal(n1,n2);
    if(c==len(ans))
    {
        cout<<ans<<endl; 
    }
    else
    {
        cout<<ans<<endl;
    }
    return 0;
}