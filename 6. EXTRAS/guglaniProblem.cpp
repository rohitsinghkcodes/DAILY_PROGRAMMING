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
    int n;
    cin>>n;
    //cout<<n%10<<endl;
    string s = to_string(n);
    cout<<count(s.begin(),s.end(),'4');
    return 0;
}