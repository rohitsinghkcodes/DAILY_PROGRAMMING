#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int grid = n*m;
    int stick = n+m;
    bool turn = true;
    while (n>=1 and m>=1)
    {
        if(turn == true)
        {
            turn = false;
            n--;
            m--;
        }
        else
        {
            turn = true;
            n--;
            m--;
        }
    }

    if(turn==true) cout<<"Malvika";
    else cout<<"Akshat";
    

    return 0;
}