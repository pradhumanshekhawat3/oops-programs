//By - PRADHUMAN SINGH SHEKHAWAT (191922)
//PROGRAM 6- WRITE A CLASS STRING THAT CAN BE USED TO STORE STRINGS,ADD STRING,EQUATE STRINGS AND OUTPUT STRINGS.

#include<iostream>
#include<string.h>
using namespace std;
class strin_g
{
private:
   string s1;
    string s2;
public:
    void setdata(string str1, string str2)
    {
        s1=str1;
        s2=str2;
        cout<<"The strings we have is "<<s1<<" and "<<s2<<endl;
    }
    void str_add(string st1,string st2)
    {
        st1.append(st2);
        cout<<"Strings after add is-\n "<<st1<<endl;
    }
    void str_equate(string s1, string s2)
    {
        if(s1==s2)
            cout<<"Both string are equal to each other";
        else
            cout<<"Both the string is not equal";
    }
};
int main()
{
     string str1;
  string str2;
    cout<<"Enter the first string\n";
    getline(cin,str1);
    cout<<"Enter the second string\n";
     getline(cin,str2);
    strin_g s1;
    s1.setdata(str1,str2);
    s1.str_add(str1,str2);
    s1.str_equate(str1,str2);
    return 0;
}

