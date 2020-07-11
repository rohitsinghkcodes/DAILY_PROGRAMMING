#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    //ONE APPROACH
    // int arr[6]={4,5,12,-2,8,9};
    // int l=sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0;i<l;i++)
    // {
    //     for(int j=i+1;j<l;j++)
    //     {
    //         if(arr[i]+arr[j]==10)
    //         {
    //             cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
    //         }
    //     }
        
    // }

    //ANOTHER APPROACH
    vector<int> v{4,5,12,-2,6,9};
    vector<int> n;
   for (auto itr=v.begin();itr<v.end();itr++)
    {
        if(count(n.begin(),n.end(),10-*itr))
        {
            cout<<*itr<<" and "<<10-*itr<<endl;
        }
        else
        {
            n.push_back(*itr);
        }
    return 0;
}



