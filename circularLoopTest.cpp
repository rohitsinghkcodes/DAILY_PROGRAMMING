#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<4)
    {
        cout<<"hello"<<i<<endl;
        i++;
        i=i%4;
    }
    return 0;
}