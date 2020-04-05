//Challenge 3: A chef was cooking something special which required exact 200ml water but he does'n have 200ml cup.
//He has a 500ml and a 300ml cup but that dish required exactly 200ml water.

#include<iostream>
using namespace std;

int main()
{
    char fiveml[5],threeml[3];
    cout<<"fill the 500ml cup fully with starts:"<<endl;
    for(auto i=0;i<5;i++)
    {
        cin>>fiveml[i];
    }
    for(auto i=0;i<3;i++)
    {
        threeml[i]=fiveml[i];
        fiveml[i]=char(NULL)    ;   
    }

    cout<<"the final 200ml water is:";
    for(auto i=0;i<5;i++)
    {
        cout<<fiveml[i]<<endl;
    }

    return 0;
}