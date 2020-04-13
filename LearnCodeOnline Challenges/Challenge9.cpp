//Challenge 9: Purchasing gift problem
#include<iostream>
using namespace std;


int main()
{
    int sweater_val=68,comp_val=75,brac_val=43,rebate=10,nsweater,ncomp,nbrac,returns,totalval;
    int finalCost,returned_val;
    cout<<"Enter the no of sweaters"<<endl;
    cin>>nsweater;
    cout<<"Enter the no of comp games"<<endl;
    cin>>ncomp;
    cout<<"Enter the no of bracelets"<<endl;
    cin>>nbrac;
    cout<<"enter the no of returned brac=";  
    cin>>returns;

    //Calculation part
    totalval = (nsweater*sweater_val)+(ncomp*comp_val)+(nbrac*brac_val);
    returned_val = (returns*brac_val)+rebate;
    finalCost = totalval-returned_val;

    //ANSWER
    cout<<"The final total cost of the gifts is: "<<finalCost<<endl;
    return 0;
}