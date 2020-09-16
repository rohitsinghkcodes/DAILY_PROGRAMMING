#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int arr2[n][m];
    vector<int> v;
    int check=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
                arr2[i][j]=0;
                if(arr[i][j]!=arr2[i][j])
                {
                    check++;
                }
            }
    }

    int c=0;
    if(check!=0)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0; j<m-1; j++)
                {
                if(arr[i][j]==1 and arr[i+1][j]==1 and arr[i][j+1]==1 and arr[i+1][j+1]==1)
                {
                    arr2[i][j]=1;
                    arr2[i+1][j]=1;
                    arr2[i][j+1]=1;
                    arr2[i+1][j+1]=1;
                    c++;
                    v.push_back(i+1);
                    v.push_back(j+1);

                }
                else{
                    continue;
                }
                }
        }
int cc=0;
        if(c==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<c<<endl;
        for(int &it:v)
        {
            if(cc>1)
            {
                cout<<endl;
                cc=0;
            }
            if(cc<=1)
            {
                cc++;
                cout<<it<<" ";
            }
        }
    }
    }
    else
    {
        cout<<0;
    }
    
    return 0;
}