//Challenge 8 : Nurse anerage work

#include<iostream>
#include<map>
using namespace std;

int main()
{
    float avg;
    // int Howard=8,Pease=10,Campbell=9,Grace=8,McCarthy=7,Murphy=12;
    // avg=float((Howard+Pease+Campbell+Grace+McCarthy+Murphy)/6);
    // cout<<"ans is="<<avg<<endl;

    //ANOTHER METHOD

    map<string,int> mp;
    mp.insert(make_pair("Howard",8));
    mp.insert(make_pair("Pease",10));
    mp.insert(make_pair("Campbell",9));
    mp.insert(make_pair("Grace",8));
    mp.insert(make_pair("McCarthy",7));
    mp.insert(make_pair("Murphy",12));
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        avg+=itr->second;
    }
    cout<<avg<<endl;
    cout<<"Average time is "<<float(avg/(mp.size()))<<" hours."<<endl;
    return 0;
}