//Challenge 26: Convertion of cm to inch, km and meter
#include<iostream>
using namespace std;
int main()
{
    float cm,inch,km,m;
    cout<<"Enter the length in cm: ";
    cin>>cm;
    inch = cm/2.54;
    m = cm/100;
    km = m/1000;
    cout<<cm<<" is "<<inch<<" inches"<<endl;
    cout<<cm<<" is "<<m<<" meters"<<endl;
    cout<<cm<<" is "<<km<<" lilo meters"<<endl;
    return 0;
}