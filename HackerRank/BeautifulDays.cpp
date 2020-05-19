//Beautiful days at the movie
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int reverse(int i)
{
    int a,val=0;
    while(i>0)
    {
        a=i%10;
        i=i/10;
        val = (val*10)+a;
    }
    return val;   
}

int diff(int a,int b)
{
    if(a>b)
    {
        return (a-b);
    }
    else
    {
        return (b-a);
    }   
} 

int main()
{
    int i,j,k,m,count=0;
    cin>>i>>j>>k;
    for(m=i;m<=j;m++)
    {
        int r = reverse(m);
        int d = diff(i,r);
        if(d%k==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}