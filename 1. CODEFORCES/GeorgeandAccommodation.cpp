//29-05-2020
#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    while(n!=0)
    {
        int a,b;
        cin>>a>>b;
        if((b-a)>=2)
        {
            c++;
        }
        n--;
    }
    cout<<c<<endl;
    return 0;
}