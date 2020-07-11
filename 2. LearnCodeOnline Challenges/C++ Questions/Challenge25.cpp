//Challenge 25 :password 
#include<iostream>
using namespace std;

void passCheck(string pass)
{
    int l=0,U=0,S=0,L=0,D=0;
    if(pass.length()>=8)
    {
        L++;
    }
    
    for(char c:pass)
    {
        
        if(isupper(c))
        {
            U++;
        }
        else if(islower(c))
        {
            l++;
        }
        else if(c=='@' || c=='#' || c=='$' || c=='%' || c=='^' || c=='&' || c=='*' || c=='(' || c==')' || c=='-' || c=='+')
        {
            S++;
        }
        else if(isdigit(c))
        {
            D++;
        }

    }

    if(l>=1 && U>=1 && S>=1 && L>=1 && D>=1)
    {
        cout<<"Entered string is VALID password."<<endl;
    }
    else
    {
        cout<<"Entered string is NOT VALID password."<<endl;
    }
}
int main()
{
    string password;
    cout<<"enter the password: ";
    cin>>password;
    passCheck(password);
    return 0;
}