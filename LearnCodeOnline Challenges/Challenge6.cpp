//Challenge 6:floppy disc problem-->assme 1000 bytes free and 0 bytes used
//f:bytes free      u:bytes used        o:deleted size      n:created size

#include<iostream>
using namespace std;

//function to add size
void add(int &f,int &u,int &n)
{
    if(f<n)
    {
        cout<<"\n****cannot create file. Disk has not enough space to add data ****"<<endl;
    }
    else
    {
        u+=n;
        f-=n;
    }
}
//function to delete size
void deleted(int &f,int &u,int &o)
{
    if(u<o)
    {
        cout<<"\n****cannot delete file. Disk has not enough data to delete****"<<endl;
    }
    else
    {
        u-=o;
        f+=o;
    }
}
//function to display status
void display(int &f,int &u)
{
    cout<<"******************************************"<<endl;
    cout<<"free size: "<<f<<"   used size: "<<u<<endl;
    cout<<"******************************************"<<endl;
}
int main()
{
    int f,u,o,n,rem,x,t;
    cout<<"enter the total size of floppy=";
    cin>>t;
    cout<<"Enter the used size=";
    cin>>u;
    f=t-u;
    while(x!=0)
    {
        cout<<"\npress 0 to exit.\n press 1 to add/create file.\n press 2 to delete file.\n press 3 to display."<<endl;
        cout<<"Enter your choice=";
        cin>>x;
        if(x==1)
        {
        cout<<"Enter the size of the file to be created=";
        cin>>n;
         add(f,u,n);
        }

        else if(x==2)
        {
        cout<<"Enter the size of the file to be deleted=";
        cin>>o;
        deleted(f,u,o);
        }
        else if(x==3)
        {
        display(f,u);
        }
        else
        {
            if(x!=0)
            {
                cout<<"\n****Enter a valid choice****"<<endl;
            } 
        }

    }
    return 0;
}