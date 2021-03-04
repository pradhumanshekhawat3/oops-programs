#include <iostream>
using namespace std;
int power( double x, int y);
int main()
{
    int pwr;
    double m;
    int n=2;
    cout<<"enter the value of num= \t";
    cin>>m;
    cout<<"enter the value of pwr= \t";
    cin>>n;
    power(m,n);
    return 0;
}
 int power( double x, int y)
 {
     int result=1,i;
     for(i=1;i<=y;i++)
     {
         result=result*x;
     }
         cout<<" value of power is= "<<result;
         return 0;
 }
