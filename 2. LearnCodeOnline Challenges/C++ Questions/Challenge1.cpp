//Challenge 1: Creation of multiplication table

#include<iostream>
using namespace std;

void table(int *n)
{
    for (int i=1;i<=10;i++)
    {
        cout<<*n<<"x "<<i<<"= "<< *n * i<<endl;
    }
}

int main()
{
    int no;
    cout<<"Enter the no=";
    cin>>no;
    table(&no);
}
