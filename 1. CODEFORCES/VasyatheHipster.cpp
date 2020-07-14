#include<iostream>
#include<algorithm>

using namespace std;
 int main()
 {
    int red,blue;
    cin>>red>>blue;
    int val1 = min(red,blue);
    int val2 = abs(red-blue);
    cout<<val1<<" "<<val2/2<<endl;
 }