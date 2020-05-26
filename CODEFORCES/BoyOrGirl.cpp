//27-05-2020
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string str,s;
    cin>>str;
    for(char c:str)
    {
        size_t found=s.find(c);
       if(found==string::npos)
       {
           s.push_back(char(c));
       }
       
    }
    if(s.length()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    
    return 0;
}
