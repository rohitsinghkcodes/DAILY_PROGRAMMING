#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    //ONE METHOD
    
    // vector<int> v;
    // v.push_back(12);
    // v.push_back(13);
    // v.push_back(8);
    // v.push_back(10);
    // v.push_back(17);
    // sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());
    // cout<<*v.begin();

    //ANOTHER METHOD(best approach)
    vector<int> v{12,13,8,10,17};
    cout<<"Max size is= "<<*max_element(v.begin(),v.end())<<endl;
    return 0;
}