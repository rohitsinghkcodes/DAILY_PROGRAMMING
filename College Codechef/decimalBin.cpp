//Challenge 23 : intenger into binary

#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string.h>
#include <vector>
#define LL long long
using namespace std;

int calBin(int no)
{
    int i = 1, bin = 0, d;
    while (no != 0)
    {
        d = no % 2;
        no = no / 2;
        bin += (d * i);
        i *= 10;
    }
    return bin;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int no, binary;
        cin >> no;
        binary = calBin(no);
        cout << binary << endl;
    }

    return 0;
}
