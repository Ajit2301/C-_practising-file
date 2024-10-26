#include<iostream>
using namespace std;
class student{
private:
    int x;
    int y;
public:
   friend void getdata(int a,int b);

};
 void getdata(int a, int b){
         student o;
        o.x=a;
        o.y=b;
        cout<<o.x+o.y;
    }


int main() {

    getdata(20,30);
    return 0;
}

