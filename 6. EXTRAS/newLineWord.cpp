#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int length,count =0;
    char s[500];
    cout<<"Enter the string:";
    cin.getline(s,500);
    length = strlen(s);
    for(int i=0;i<length;i++)
    {
        if(s[i]==' ' || s[i]=='\t' || s[i]==(int)NULL /*|| s[i]=='.'*/)
        {
            cout<<"\n";
            count++;
        }
        else if(s[i]=='.')
        {
            cout<<"\n\n";
            count++;
        }
        else
        {
            cout<<s[i];
            
        }
        
    }
    cout<<"\nThere are total "<<count<<" words present in the input string";
    return 0;

}