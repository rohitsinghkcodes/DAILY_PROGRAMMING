#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int length,count = 0;
    char s[500];
    cout<<"Enter the string:";
    cin.getline(s,500);
    length = strlen(s);
    for(int i=0;i<=length;i++)
    {
        if(s[i]==' ' || s[i]=='\t' || s[i]==(char)NULL )
        {
            count++;
        }
    }
    cout<<endl<<endl<<"The word limit for the eaasy writing competition is "<<count;
    return 0;

}
