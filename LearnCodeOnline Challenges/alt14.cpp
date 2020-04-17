//Alternate method of challenge 14:learncodeonline

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string arr[]={"Ram","Shyam","Ravi","Kishan"};
    int  count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    do{
        cout<<arr[0]<<"-"<<arr[1]<<"-"<<arr[2]<<"-"<<arr[3]<<endl;
        count++;
    }while(next_permutation(arr,arr+n));
    cout<<"Total no of ways is = "<<count<<endl;
    return 0;
}