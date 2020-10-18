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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        string s2;
        cin >> s2;

        if (n == s2.length())
        {

            string snew = s2.substr(s2.length() - 1);
            string snew2 = s2.substr(0, s2.length() - 1);
            size_t found = snew2.find(snew);
            if (found != string::npos)
            {

                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}