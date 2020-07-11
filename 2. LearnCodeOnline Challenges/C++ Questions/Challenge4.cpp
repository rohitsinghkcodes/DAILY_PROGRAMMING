//Challenge 4: Jack bought 400 hot dogs for the school picnic.
// If they were containerd in the packages of 8 hotdogs, how many total packages did he buy?
// Create a C++ programwithout using "/" or "%" operator.

#include<iostream>
using namespace std;

int main()
{
    int totalHot = 400;
    int packetHot = 8;
    int count = 0;
    while(totalHot>0)
    {
        totalHot-=packetHot;
        count++;
    }
    cout<<"The total number of packages are: "<<count<<endl;
    return 0;
}