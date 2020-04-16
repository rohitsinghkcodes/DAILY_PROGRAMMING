//Challenge 14:

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
    n *= fact(n-1);
    }
}

int main()
{
    int n,i,j,k,count=0,l;
    string name[]={"Ram","Anuj","Deepak","Ravi"};
    n = sizeof(name)/sizeof(name[0]);
    cout<<n<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i)
            {
                continue;
            }
                for(k=0;k<n;k++)
                {
                  if(k==i || k==j)
                  {
                      continue;
                  }
                    for(l=0;l<n;l++)
                    {
                        if(l==i || l==j || l==k)
                        {
                            continue;
                        }
                        cout<<"{ "<<name[i]<<", "<<name[j]<<", "<<name[k]<<", "<<name[l]<<" }"<<endl;
                        count++;
                    }
                }
        }
    }
    cout<<"\nCount="<<count<<endl;
    return 0;
}