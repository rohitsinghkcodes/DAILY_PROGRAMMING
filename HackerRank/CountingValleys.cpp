#include<iostream>
using namespace std;

int main()
{
    int n,count=0,count2=0;
    string str;
    cin>>n>>str;
    // if(str.length()!=0)
    // {
    //     count++;
    // }
    for(char c:str)
    {
        if(c=='U')
        {
            count++;
        }
        else if(c=='D')
        {
            count--;
        }
        if(count==0 && c=='U')
        {
            count2++;
        }
    }
    cout<<count2<<endl;
    return 0;
}