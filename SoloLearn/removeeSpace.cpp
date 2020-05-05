//Remove spaces form the string
#include<iostream>
using namespace std;
int main()
{
    string str = "How to remove space from string.";
    for(char c:str)
    {
        if(c!=' ')
        {
            cout<<c;
        }

    }
    return 0;
}