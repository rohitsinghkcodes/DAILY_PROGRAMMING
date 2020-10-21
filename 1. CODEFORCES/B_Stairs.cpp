//incomplete
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
        LL n;
        cin>>n;
        LL x1=1, x2=2;
        int xprev , c=0;
        vector<int> v;
           
        while(n)
        {

            if(n>=x1)
            {
                xprev = x1;
                x1+=x2;
                x2++;
            }
            else
            {
                
                    n-=xprev;
                    x1=1;
                    x2=2;


                if(count(v.begin(),v.end(),xprev)==0)
                {
                    v.push_back(xprev);
                    c++;
                }
            }
            
        }
        cout<<c<<endl;

    }

    return 0;
}