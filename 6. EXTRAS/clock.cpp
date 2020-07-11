#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int h=0,m=0,s=0;
    cout<<"Enter time in format [ HH:MM:SS ]";
    cin>>h>>m>>s;
    start:;
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {

            for(s;s<60;s++)
            {
                system("clear");
                cout<<"\n\t\t\t\t\t   ***  *        **        ***  *     *" ;
                cout<<"\n\t\t\t\t\t *      *     *      *   *      *   * ";
                cout<<"\n\t\t\t\t\t*       *    *        * *       * *";
                cout<<"\n\t\t\t\t\t *      *     *      *   *      *   * ";
                cout<<"\n\t\t\t\t\t   ***  *****    **        ***  *     *   ";
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------";
                cout<<"\n\t\t\t\t\t\t\t "<<h<<":"<<m<<":"<<s;
                cout<<"\n\t\t\t\t\t\t\t---------";
                for(int i=0;i<59999999;i++)
                {
                    i++;
                    i--;
                }
               
            }
            s=0;
        }
        m=0;
    }
    goto start;
    return 0;
}