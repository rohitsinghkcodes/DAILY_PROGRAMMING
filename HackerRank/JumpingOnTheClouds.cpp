//24-05-2020

//INCOMPLETE CODE
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m=0;
    while(n>0)
    {
        if(arr[m+1]==0)
        {
            m++;
        }
        n--;
    }
    return 0;
}