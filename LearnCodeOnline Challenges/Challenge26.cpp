//Challenge 26: Celcius to Fahrenheit
#include<iostream>
using namespace std;

int convertFarehn(float *celcius)
{
    return (9.0/5.0)* *celcius +32;
}
int main()
{
    float c;
    cout<<"Enter the temperature at 8 a.m.(in celcius): ";
    cin>>c;
    cout<<"The temperature in farehnheit is: "<<convertFarehn(&c)<<endl;
    return 0;
}