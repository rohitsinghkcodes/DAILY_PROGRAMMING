//Challenge 29: convert into miles per hours :Calculate speed
#include<iostream>
using namespace std;
int main()
{
    float dist,min,sec,hour,one_mile,new_dist,time;
    one_mile = 1.609*1000;
    cout<<"Enter the distance in meters: ";
    cin>>dist;
    cout<<"Enter the time\n Hours: ";
    cin>>hour;
    cout<<"Minutes: ";
    cin>>min;
    cout<<"Seconds: ";
    cin>>sec;
    new_dist = dist/one_mile;
    time = hour+(min/60.0)+(sec/3600);
    cout<<"The speed in miles per hour is: "<<new_dist/time<<endl; 
    return 0;
}
