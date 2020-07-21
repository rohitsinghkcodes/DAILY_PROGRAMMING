#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    vector<int> v(n),v2;
    for(int &it:v) cin>>it;
    v.push_back(0);
    for(int &it:v)
    {
        if(it<=*(&it+1)) ++c;
        if(it>*(&it+1))
        {
            v2.push_back(c+1);
            c=0;
        }
    }
    cout<<*max_element(v2.begin(),v2.end());
    return 0;
}