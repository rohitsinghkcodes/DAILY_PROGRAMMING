
//Breach-2
//Raze-1
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        LL n;
        string s;
        // int ans;
        cin>>n;
        cin>>s;
        // int newX = x;
        // vector<int> v;
        // while(x>0)
        // {
        //     int cut = x%10;
        //     x = x/10;
        //     v.push_back(cut);
        // }
        // if(n==1)
        // {
        //     if(newX%2==0) ans=2;
        //     else ans=1;
        // }
        // else
        // {
        //     sort(v.begin(),v.end());
        //     reverse(v.begin(),v.end());
        //     if(count(v.begin(),v.end(),0)==1)
        //     {
        //         if(n%2==0)
        //         {
        //             ans = 2;
        //         }
        //         else
        //         {
        //             ans = 1;
        //         }
                
        //     }
        //     else
        //     {
        //         int countz = count(v.begin(),v.end(),0);
        //         if(countz%2==0) ans = 2;
        //         else ans = 1;
 
        //     }
            
        // }
        // cout<<ans<<endl;

        if(n==1)
        {
            if(x%2==0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;;
            }
            
        }
        else
        {
            if(n%2==0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
            
        }
        
        
    }
    return 0;
}