#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[500];
    cout<<"Enter the string:";
    cin.getline(s,500);
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(isupper(s[i])){
            cout<<(char)tolower(s[i]);
        }
        else if(tolower(s[i])){
            cout<<(char)toupper(s[i]);
        }
    }
}