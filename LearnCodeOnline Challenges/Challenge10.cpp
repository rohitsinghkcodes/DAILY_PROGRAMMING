//Challenge 10: Salesperson Rita drives 2,052 miles in 6 days, stopping at 2 towns each day
// How many km does she average between stops?
// 1 mile = 1.609 km

#include<iostream>
using namespace std;

int main()
{
    int totalDist=2052,totalDays=6,stops;
    float mileConvert=1.609;
    cout<<"Enter the times she stops in a day= ";
    cin>>stops;
    cout<<"THe distance between every stop is = "<<float((totalDist/totalDays)/stops)*mileConvert<<endl;
    return 0;
}