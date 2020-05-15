//15-05-2020
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    string str;
    vector<string> v;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>str;
        v.push_back(str);
    }
    
    for(auto itr=v.begin(); itr<v.end();itr++)
    {
        if(itr->length()>10)
        {
            cout<<*itr->begin()<<itr->length()-2<<itr->back()<<endl;
        }
        else
        {
            cout<<*itr<<endl;
        }
    }
    return 0;
}