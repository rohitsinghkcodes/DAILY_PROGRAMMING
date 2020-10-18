#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long int
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        LL l,r;
        cin>>l>>r;
        if(abs(l-r)==(r%l))
        {
            cout<<r<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
        
    }
    return 0;
}