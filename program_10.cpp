#include<iostream>
using namespace std;

class item1
{
public:
    item1()
    {
        cout<<"price of the item 1 is- 100"<<endl;
    }
};
class item2
{
public:
    item2()
    {
        cout<<"price of the item 2 is-200 "<<endl;
    }
};
class all: public item2 ,public item1
{
public:
    all(){cout <<"all is called"<<endl;}
};
int main()
{
    all a;
    return 0;
}
