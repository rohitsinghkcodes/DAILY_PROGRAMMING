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
    int n1,n2;
    cin>>n1>>n2;
    int i=0;
    vector<string> v(n1),v2checkstr(n2);
    for(string &it:v) cin>>it;
    for(string &x:v2checkstr) cin>>x;
    for(string &it:v2checkstr) if(it==v[i]) i++;
    if(i==v.size()) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}