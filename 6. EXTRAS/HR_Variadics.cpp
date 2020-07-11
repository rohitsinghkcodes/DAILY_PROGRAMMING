/* EXPLAINATION =>
The second character on the first line is a 1 , because the second value in the range 64..127 is 65 and x is 65
The eleventh character on the second line is a 1, because the eleventh value in the range is 0..63 and is 10 amd x is 10.
All other characters are zero, because the corresponding values in the range do not match x.
*/

#include<iostream>
using namespace std;
void answer(int x,int y)
{
    
    int s=64*y;
    //cout<<"==>"<<s;
    int e=(64*y)+63;
    
    for(int l=s;l<=e;l++)
    {
        if(l==x)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    cout<<endl;
}
int main()
{
    int N,x,y;
    cout<<"Enter the size=";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>x>>y;
        answer(x,y);

    }
    return 0;
}