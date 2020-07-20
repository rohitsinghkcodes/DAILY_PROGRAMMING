#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<numeric>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int> v;
        int x;
        cin>>x;
        for(int j=0; j<x; j++)
        {
            int m;
            cin>>m;
            v.push_back(m);
        }
        int val = accumulate(v.begin(),v.end(),1,multiplies<>());
        if(val%2 != 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
