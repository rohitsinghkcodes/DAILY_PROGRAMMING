//Challenge 30:
#include<iostream>
using namespace std;

void sum(int a,int b)
{
    cout<<"The sum is: "<<a+b<<endl;
}

void diff(int a,int b)
{
    if(a>b)
    {
        cout<<"The max value is: "<<a<<endl;
        cout<<"The min value is: "<<b<<endl;
        cout<<"The difference is: "<<a-b<<endl;
    }
    else
    {
        {
            cout<<"The max value is: "<<b<<endl;
            cout<<"The min value is: "<<a<<endl;
            cout<<"The difference is: "<<b-a<<endl;
        }
    }
    
}

void product(int a,int b)
{
    cout<<"The product is: "<<a*b<<endl;
}

void avg(int a,int b)
{
    cout<<"The average is: "<<(a+b)/2<<endl;
}


int main()
{
    int x1,x2;
    cout<<"Enter the two intergers: ";
    cin>>x1>>x2;
    sum(x1,x2);
    diff(x1,x2);
    product(x1,x2);
    avg(x1,x2);
    return 0;
}