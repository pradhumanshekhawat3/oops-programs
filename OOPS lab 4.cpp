#include<iostream>
using namespace std;
 inline int power(int a,int b);

int main()
{
    cout<<"this program work on the concept of inline function"<<endl;
    cout<<"the value of power is\t "<<power(2,2)<<endl;
     cout<<"the value of power is\t "<<power(2,3)<<endl;
      cout<<"the value of power is\t "<<power(2,4)<<endl;
      return 0;
}
int power( int a, int b)
 {
     int result=1,i;
     for(i=1;i<=b;i++)
     {
         result=result*a;
     }
        return result;
 }

