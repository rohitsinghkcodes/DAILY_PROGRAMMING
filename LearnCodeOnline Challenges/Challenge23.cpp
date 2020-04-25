//Challenge 23 : intenger into binary

#include<iostream>
using namespace std;

int calBin(int no)
{
    int i=1,bin=0,d;
    while(no!=0)
    {
        d = no%2;
        no = no/2;
        bin += (d*i);
        i*=10;
    }
    return bin;
}
int main()
{
    int no,binary;
    cout<<"Enter thr no = ";
    cin>>no;
    binary = calBin(no);
    cout<<"The value in binary is "<<binary<<endl;
    return 0;

}