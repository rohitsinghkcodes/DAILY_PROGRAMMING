//Challenge 5: Bubble sort
#include<iostream>
using namespace std;

int main()
{
    // int ar[7]={66,57,54,53,64,52,59};
    int n;
    cout<<"Enter the size of the array=";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];cout<<endl;
    }
    int temp;
    for(int i=0; i<n-1; i++)
    {
        int min=ar[0];
        for(int j=0; j<n-i-1; j++)
        {
        if(ar[j]>ar[j+1])
        {
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }

        }
    }
    
    cout<<"Her best score (time) is = "<<ar[0]<<endl;
    return 0;
}