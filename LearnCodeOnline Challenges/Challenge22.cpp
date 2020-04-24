//Challenge 22 : leapyear

#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter the year: ";
    cin>>y;
    if(y%4==0)
    {
        cout<<y<<" year is a leap year"<<endl;
    }
    else
    {
        cout<<y<<" year is not a leap year"<<endl;
    }
    
    return 0;
}