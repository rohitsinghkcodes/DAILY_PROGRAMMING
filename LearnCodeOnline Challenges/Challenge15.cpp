//Challenge 5 :learnCodeOnline

#include<iostream>
using namespace std;

int main()
{
    float spentper,spentmon;
    cout<<"Enter the percentage of spent amount on DVDs = ";
    cin>>spentper;
    cout<<"Enter the spent amount on DVDs = ";
    cin>>spentmon;
    int k =(spentmon/spentper)*100;
    cout<<"The total amount(salary) is= "<<k<<"\nThe amount he deposited is= "<<k-spentmon<<endl;
    return 0;
}
