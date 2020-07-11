//Challegne 28: Age calculation
#include<iostream>
using namespace std;

int main()
{
    float time;
    cout<<"Enter the Dave age in minutes: ";
    cin>>time;
    float age = time/525600.0;
    cout<<"Dave is ";
    printf("%.2f",age);
    cout<<" years old."<<endl;
    return 0;
}