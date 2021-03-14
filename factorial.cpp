#include<iostream>
using namespace std;
int factorial(int n);
 int main()
 {
     int n;
     cout<<"enter the value n-";
     cin>>n;
     cout<<"factorial of the number is-"<< factorial(n);
 }
 int factorial(int n)
 {
     if(n>1)
     return n*factorial(n-1);
     else
        return 1;
 }

