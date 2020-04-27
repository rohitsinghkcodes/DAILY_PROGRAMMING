//Challenge 24:

#include<iostream>
using namespace std;

int CalRoman(int sum)
{
    string arr[50];
    int i=0;
    while(sum!=0)
    {
        if(sum>=1000)
        {
            sum=sum-1000;
            arr[i]="M";
            i++;
        }
        if(sum>=900 && sum<1000)
        {
            sum=sum-900;
            arr[i]="CM";
            i++;
        }
        if(sum>=500 &&sum<1000)
        {
           sum=sum-500;
            arr[i]="D";
            i++; 
        }
        if(sum>=100 &&sum<500)
        {
           sum=sum-100;
            arr[i]="C";
            i++; 
        }
        if(sum>=90 &&sum<100)
        {
           sum=sum-90;
            arr[i]="XC";
            i++; 
        }
        if(sum>=50 &&sum<90)
        {
           sum=sum-50;
            arr[i]="L";
            i++; 
        }
        if(sum>=10 &&sum<50)
        {
           sum=sum-10;
            arr[i]="X";
            i++; 
        }
        if(sum==9)
        {
            sum=sum-9;
            arr[i]="IX";
            i++;
        }
        if(sum>=5 &&sum<9)
        {
            sum=sum-5;
            arr[i]="V";
            i++;
        }
        if(sum==4)
        {
            sum=sum-4;
            arr[i]="IV";
            i++;
        }
        if(sum>=1 &&sum<4)
        {
           sum=sum-1;
            arr[i]="I";
            i++; 
        }

    }
    cout<<"\nThe roman value is: ";
    for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++)
    {
        cout<<arr[j];
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