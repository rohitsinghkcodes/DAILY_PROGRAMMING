//30-06-2020---> IMCOMPLETE CODE
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    int count = 0;
    auto max = v.begin(),min = v.end()-1;
    for(auto i=v.begin();i<v.end();i++)
    {
        if(*i>*max)
        {
            *max = *i;
        }
        if(*i<*min)
        {
            *min = *i;
        }
    }
    cout<<*max<<" "<<*min<<endl;

    int m = *max;
    sort(v.begin(),v.end());
    ptrdiff_t indmax = find(v.begin(),v.end(),m)- v.begin();
    ptrdiff_t indmin = (find(v.begin(),v.end(),*min)- v.begin());
    cout<<indmax<<" pos"<<indmin<< endl;
    // if(*v.begin()==*min)
    // {
    //     count++;
    // }
    // if(*v.end()-1==*max)
    // {
    //     count++;
    // }

    // //Calculation
    // int x = n - 4;
    // int y = indmax - 1;
    // cout<<"The ans is:"<<x<<" "<<y<<" "<<x+y<<endl;

    // cout<<count<<endl;

    return 0;
}
