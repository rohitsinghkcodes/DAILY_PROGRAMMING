#include<iostream>
using namespace std;

//ONE APPROACH

int main()
{
    int arr[6]={4,5,12,-2,8,9};
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(arr[i]+arr[j]==10)
            {
                cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
            }
        }
        
    }
    return 0;
}


