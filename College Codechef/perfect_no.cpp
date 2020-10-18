#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string.h>
#include <vector>
#define LL long long
using namespace std;

int main()
{
    LL tc;
    cin >> tc;
    while (tc--)
    {
        LL sum = 0;
        LL n;
        cin >> n;
        if (n > 1)
        {
            for (LL i = 1; i < n; i++)
            {
                if (n % i == 0)
                {
                    sum += i;
                }
            }
            if (sum == n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}