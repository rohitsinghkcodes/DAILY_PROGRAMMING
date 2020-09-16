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
    
    int n;
    cin>>n;
    vector<LL> v(n);
    for(LL &it:v) cin>>it;
    set<LL> st;
    for(LL &it:v)
    {
        st.insert(it);
    }
    cout<<n-st.size()<<endl;
    return 0;
}