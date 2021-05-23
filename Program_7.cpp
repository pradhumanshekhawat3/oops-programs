//BY- Pradhuman singh  ROLL NO- 191922
//program_7 To add and display two Time objects
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Time{
    private:
        int H;
        int M;
        int S;
    public:

        Time(int h =0,int m = 0, int s = 0){
            H = h;
            M = m;
            S = s;
        }
        Time add(Time t1){
            Time temp;
            temp.S = S + t1.S;
            temp.M = M + t1.M;
            temp.H = H + t1.H;
            if(temp.S >= 60){
                temp.M += temp.S / 60;
                temp.S = temp.S % 60;
            }
            if(temp.M >= 60){
                temp.H += temp.M / 60;
                temp.M = temp.M % 60;
            }
            return temp;
        }
        void display(){
            cout<<"HH:MM:SS = "<<H<<":"<<M<<":"<<S<<endl;
        }
};


int main(){

    Time t1(3,45,43), t2(9,54,60), t3;
    cout<<"Two times are:"<<endl;
    t1.display();
    t2.display();
    t3 = t1.add(t2);
    cout<<"SUM is:"<<endl;
    t3.display();
    return 0;
}
