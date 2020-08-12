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
    int sum=10;
    int y = 0;
    vector<int> v={4,1,4,3,-6,-7,2},v2;
    for(auto i :v)
    {
        v2.push_back(y);
        y+=i;
        if(count(v2.begin(),v2.end(),y-sum))
        {
            cout<<"true"<<endl;
            break;
        }

    }
    cout<<"false";
    return 0;
}