#include<iostream>
using namespace std;

class One{
    public:
    void print()
    {
        cout<<"printing";
    }
};
class Two{
    public:
    void check()
    {
        One o;
        o.print();
    }
};
int main()
{   
    Two t;
    t.check();
    return 0;
}