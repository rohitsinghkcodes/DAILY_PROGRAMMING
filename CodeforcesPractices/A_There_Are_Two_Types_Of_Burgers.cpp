#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int p,b,f,h,c;
        int profit=0;
        cin>>p>>b>>f;
        cin>>h>>c;
        // if(p==0) profit=0;
        if(p%2!=0) p--;
        
        // if(h<c)
        // {
        //     if(p>=2*f)
        //     {
        //         p-=2*f;
        //         profit+=(c*f);
        //     }
        //     else
        //     {
        //         profit+=c*(p/2);
        //         p=0;
        //     }
        //     if(p<2*b) profit+=h*(p/2);
        //     else profit+=h*b;
            
        // }
        // else
        //     {
        //         if(p>=2*b)
        //         {
        //             p-=2*b;
        //             profit+=(h*b);
        //         }else{
        //             profit+=h*(p/2);
        //             p=0;
        //         }
                
        //         if(p<2*b) profit+=c*(p/2);
        //         else profit+=c*f;
        //     }



        if (c>h)
        {
            while(f and p)
            {
                profit+= c;
                p-=2;
                f--;
            }
            while(b and p)
            {
                profit+= h;
                p-=2;
                b--;
            }
        }
        else{
            while(b and p)
            {
                profit+= h;
                p-=2;
                b--;
            }
            while(f and p)
            {
                profit+= c;
                p-=2;
                f--;
            }
        }
        
        cout<<profit<<endl;
    }
    return 0;
}