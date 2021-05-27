// BY-PRADHUMAN SINGH SHEKHAWAT // ROLL NO-191922
//THIS IS PROGRAM_9 OF OOPS LAB

#include<iostream>
#include<string>
using namespace std;
// AND CALLING CONSTRUCTOR 3 TIMES SHOWS CONSTRUCTOR OVERLOADING.
 class item
 {
     string item_name;
     float price;
 public:
    item();
    item(string a,float b);//PRAMETRISED CONSTRUCTOR
    item (item &I);//COPY CONSTRUCTOR
    void display()
    {
        cout<<"Item we have is-"<<item_name<<endl;
        cout<<"Item price is-"<<price<<endl;
    }
 };
 item :: item(string a,float b)
 {
     item_name=a;
     price=b;
 }
 item :: item( item &I)
 {
     item_name=I.item_name;
     price=I.price;
 }
 int main()
 {
     string s;
     float p;
     cout<<"Enter the item name-"<<endl;
     getline(cin,s);
     cout<<"Enter the item price-"<<endl;
     cin>>p;
     item I1(s,p);
     I1.display();
     item I2=I1;
     I2.display();
     return 0;
 }
