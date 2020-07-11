//PROGRAM TO  CONVERT DECIMAL NUMBER INTO BINARY NUMBER

#include<iostream>
using namespace std;

int conversion(int no)
{   int rem,bin = 0,i=1;
while(no != 0){
        rem = no%2;
        no = no/2;
        bin += rem*i;
        i *=10;
    }
    return bin;

}

int main()
{
    int no,ans;
    cout<<"Enter the number in decimal:";
    cin>>no;
    ans = conversion(no);
    cout<<"the final answer is = "<<ans<<"\n";
}
