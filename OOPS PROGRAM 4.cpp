// write the program  to show the effect of default argument can be alternatively
//achieved by overloading.
//BY - Pradhuman singh 191922

#include<iostream>
using namespace std;
 float power(double, int);
 float power( int,int);
  int main()
  {

      double a;
      int b,c;
      cout<<"enter the value of a,b and c";
      cin>>a>>b>>c;
      power(a,);
      power(b,c);
      return 0;
}
float power(double x ,int y=2)
{
    int result=1,i;
    for(i=1;i<=y;i++)
    {
        result=result*x;
    }
    cout<<"result1 is:"<<result<<endl;
return 0;
}
float power(int x,int y)
{
    int result=1,i;
    for(i=1;i<=y;i++)
    {
        result=result*x;
    }
    cout<<"result2is:"<<result;
return 0;
}
