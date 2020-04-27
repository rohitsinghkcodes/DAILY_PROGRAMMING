//Alternate and short method to solve Challenge 24

#include<iostream>
using namespace std;

void CalRoman(int sum)
{
    int no[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string romanval[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","XM","M"};
    int i=12;
    while (sum>0)
    {
        int val = sum/no[i];
        sum = sum%no[i];
        while (val--)
        {
            cout<<romanval[i];
        }
        i--;
        
    }
    
}
int main()
{
    int j,n,sum=0;
    cout<<"Enter the no of books Julie has: ";
    cin>>j;
    cout<<"Enter the no of books Nancy has: ";
    cin>>n;
    sum=j+n;
    if(sum==0)
    {
        cout<<"\nSorry! They do not have any book."<<endl;
    }
    else
    {
        CalRoman(sum);
    }
    cout<<endl;
    return 0;
}