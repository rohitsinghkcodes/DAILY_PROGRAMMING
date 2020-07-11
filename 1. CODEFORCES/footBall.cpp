//25-05-2020
#include<iostream>
using namespace std;
int main()
{
    string s;
    int count=0;
    cin>>s;
    if(s.length()>=7)
    {
            for(int i=0;i<s.length()-6;i++)
        {
            if(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] && s[i]==s[i+4] && s[i]==s[i+5] && s[i]==s[i+6])
            {
                count++;
            }
        }
    }
    
    if(count>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}