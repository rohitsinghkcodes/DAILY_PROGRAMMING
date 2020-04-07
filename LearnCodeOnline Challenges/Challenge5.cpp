//Challenge 5: Bubble sort
#include<iostream>
using namespace std;

int main()
{
    int ar[7]={66,57,54,53,64,52,59};
     int temp;
    for(int i=0;i<7;i++)
    {
        int min=ar[0];
        for(int j=0;j<7;j++)
        {
        if(ar[j]>ar[j+1])
        {
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }

        }
    }
   for(int m=0;m<7;m++)
   {
       cout<<ar[m]<<",";
   }
   cout<<endl;
    return 0;
}