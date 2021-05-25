//by - PRADHUMAN SINGH
//ROLL NO-191922

#include<iostream>
using namespace std;
class shape
{ public:
    virtual int numberofside()=0;
};
class trapezoid :public shape
{
public:
    int numberofside()
    {
        cout<<"No of sides trapezoid has=4"<<endl;
        return 0;
    }
};
class triangle :public shape
{
public:
    int numberofside()
    {

        cout<<"No of sides triangle has=3"<<endl;
        return 0;
    }
};
class hexagon :public shape
{
public:
    int numberofside()
    {
        cout<<"No of sides hexagon has=6"<<endl;
        return 0;
    }
};
int main()
{
    trapezoid trap;
    triangle tri;
    hexagon hex;
    trap.numberofside();
    tri.numberofside();
    hex.numberofside();
    return 0;
}
