#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
    int n,c=0,maxNo=0;
    cin>>n;
    vector<int> v(n),seq,maxContainer;
    for(int &it:v) cin>>it;
    sort(v.begin(),v.end());
    for(int &it:v)
    {
        if(*(&it+1)==it+1) seq.push_back(it);
        else
        {
            seq.push_back(it);
            if(seq.size()>maxNo)
            {
                maxNo = seq.size();
                maxContainer = seq;
            }
            seq.clear();
        }
    }
    cout<<"Ans: ["<<maxContainer.front()<<" , "<<maxContainer.back()<<"]"<<endl;
    return 0;
}