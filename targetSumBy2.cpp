#include<iostream>
#include<vector>
using namespace std;


int main()
{
    //ONE APPROACH
    int arr[6]={4,5,12,-2,8,9};
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(arr[i]+arr[j]==10)
            {
                cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
            }
        }
        
    }

    //ANOTHER APPROACH
    // vector<int> v{4,5,12,-2,8,9};
    // string s;
    // for (auto itr=v.begin();itr<v.end();itr++)
    // {
    //     size_t found = s.find(10-*itr);
    //     if(found == string::npos)
    //     {
    //         s.push_back(char(*itr));
    //     }
    // }

    // cout<<s<<endl;
    return 0;
}



