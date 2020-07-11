//26-05-2020
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    char ar[n];
    vector<char> v;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==ar[i-1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}