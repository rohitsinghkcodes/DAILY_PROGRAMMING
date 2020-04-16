//Challenge 13: Lemonade challenge

#include<iostream>
using namespace std;

void soldmore(int k,int r)
{
    if(k>r)
    {
        cout<<"Kara made more profit than Rani"<<endl;
        cout<<"Kara made a profit of "<<k-r<<" cents over Rani profit"<<endl;
    }
    else
    {
        cout<<"Rani made more profit than Kara"<<endl;
        cout<<"Rani made a profit of "<<r-k<<" cents over Kara profit"<<endl;
    }
    
}
int main()
{
    int karaLemonVal=5,raniLemonVal =7;
    int k,r;
    cout<<"Enter the no of lemonade glasses kara sold= ";
    cin>>k;
    cout<<"Enter the no of lemonade glasses Rani sold= ";
    cin>>r;
    int RaniTotal = r*raniLemonVal;
    int KaraToral = k*karaLemonVal;
    soldmore(KaraToral,RaniTotal);
    return 0;
}