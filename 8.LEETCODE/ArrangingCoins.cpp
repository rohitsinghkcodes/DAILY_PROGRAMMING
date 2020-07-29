#include<iostream>
using namespace std;
int main()
{
     int n,i=1;
     cin>>n;
     while(n>=i)
     {
         n-=i;
         i++;
     }
     cout<<i-1<<endl;
}