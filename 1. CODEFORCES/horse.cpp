//30-06-2020
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int> s{s1,s2,s3,s4};
    cout<<4-s.size();
    return 0;
}