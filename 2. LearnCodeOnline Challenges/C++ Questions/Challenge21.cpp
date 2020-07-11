//Challenge 21: angle between hour and minute hand

#include<iostream>
using namespace std;

int calAngle(float h,float m)
{
    float anglecount=0.0;
    float countmin;
    if(h==12)
    {
        h=0;
    }
    if(m==60)
    {
        m=0;
    }

    countmin =m/5;
    countmin>h?(anglecount = countmin-h):(anglecount = h-countmin);
    return (30*anglecount);
}
int main()
{
    float h,m;
    float angle;
    cout<<"Enter the time:\nhours: ";
    cin>>h;
    cout<<"minutes: ";
    cin>>m;
    if(m<0||h<0||m>60||h>60)
    {
        cout<<"Wrong entry!"<<endl;
    }
    else
    {
        angle = calAngle(h,m);
    }
    
    if(angle==0)
    {
        cout<<"Hour and minute hand overlapped.\n and angle is: "<<angle<<" degree"<<endl;
    }
    else
    {
        cout<<"seperation is of "<<angle<<" angles."<<endl;
    }
    
    
    return 0;   
}