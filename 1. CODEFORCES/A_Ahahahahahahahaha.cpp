//Incorrect by codeforces

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
        cin>>n;
        LL c=0;
        vector<LL> v(n),v1;

        LL arr[n];
        for(LL i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        //for(int &it:v) cin>>it;
        for(LL i=0;i<n;i++)
        {
            if(arr[i]-arr[i+1]==0)
            {
                v1.push_back(arr[i]);
                v1.push_back(arr[i+1]);
                i++;
                c+=2;
            }   
        }
        if(c==0)
        {
            c=1;
            cout<<c<<endl<<0<<endl;
        }
        else
        {
            cout<<c<<endl;
            for(auto &it:v1)cout<<it<<" ";
            cout<<endl;
        }
        
    
    }
    return 0;
}