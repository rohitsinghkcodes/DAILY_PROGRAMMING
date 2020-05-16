#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (char i:s)
    {
        if(i=='r')
        {
            i = toupper(i);
        }
        cout<<i<<endl;
    }
    return 0;
}