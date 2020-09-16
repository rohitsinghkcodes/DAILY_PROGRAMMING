#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long int
#define LD long double
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        LL x,y,k;
        cin>>x>>y>>k;
        LL req = ((y*k)+k)-1;
        if(x==2)
        {
            cout<<req+k<<endl;
        }
        else
        {
            cout<<(ceil(double(double(req)/double(x-1))))+k<<endl;;
            
        }
        
    }
    return 0;
}