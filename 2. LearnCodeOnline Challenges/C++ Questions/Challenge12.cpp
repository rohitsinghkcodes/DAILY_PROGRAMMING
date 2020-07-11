//Challenge 12:

#include<iostream>
using namespace std;

int main()
{
    float rbc,wbc;
    cout<<"Enter the no of rbc = ";
    cin>>rbc;
    cout<<"Enter the value of wbc = ";
    cin>>wbc;
    if(rbc>wbc)
        cout<<"Ratio of rbc:wbc is = "<<rbc/wbc<<":1";
    else
        cout<<"Ratio is rbc:wbc is = 1:"<<wbc/rbc;

    //Another method
    
    return 0;
}