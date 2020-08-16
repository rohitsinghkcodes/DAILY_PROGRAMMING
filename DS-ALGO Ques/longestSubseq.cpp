#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    vector<int> v(n),v2;
    for(int &it:v) cin>>it;
    sort(v.begin(),v.end());
    for(int &it:v)
    {
      if(*(&it+1)==it+1) c++;  
      else
      {
          v2.push_back(c+1);
          c=0;
      }
    }
    sort(v2.begin(),v2.end());
    cout<<"Ans is: "<<v2.back();
    return 0;
}