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
    int a1,a2,k1,k2,n;
    int maxPlayer, minPlayer,team1,team2;
    cin>>a1>>a2>>k1>>k2>>n;

    if((k1*a1)+(k2*a2)<= n)
    {
        maxPlayer = a1+a2;

        minPlayer = maxPlayer;
    }
    else if(k1>k2)
    {
        int n2= n;
        n-=(k2*a2);
        maxPlayer = a2+ (n/k1);
        if(maxPlayer>a1+a2) maxPlayer = a1+a2;

        n2-=(k1*a1);
        minPlayer =(n2/k2);
        if (minPlayer<0) minPlayer = 0;
    }

    else if(k1<k2)
    {
        int n2= n;
        n-=(k1*a1);
        maxPlayer = a1 + (n/k2);
        if(maxPlayer>a1+a2) maxPlayer = a1+a2;
        
        n2-=(k2*a2);
        minPlayer =(n2/k1);
        if (minPlayer<0) minPlayer = 0;

    }

    else
    {
        if(a1>a2)
        {
            int n2= n;
            n-=(k1*a1);
            maxPlayer = a1 + (n/k2);
            if(maxPlayer>a1+a2) maxPlayer = a1+a2;
            
            minPlayer = maxPlayer;
        }

        else
        {
            int n2= n;
            n-=(k2*a2);
            maxPlayer = a2+ (n/k1);
            if(maxPlayer>a1+a2) maxPlayer = a1+a2;

            minPlayer = maxPlayer;
        }
        
    }
    
    cout<<minPlayer<<" "<<maxPlayer<<endl;


    return 0;
}