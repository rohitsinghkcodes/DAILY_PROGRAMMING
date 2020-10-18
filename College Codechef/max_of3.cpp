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
        vector<int> v(3);
        for(int &it:v) cin>>it;
        cout<< *max_element(v.begin(),v.end())<<endl;
    }
    return 0;
}