#include<iostream>
using namespace std;
class s;
class student {
private:
    int x;
    int y;
    friend s;

};
class s{
public:

   void getdata(int a, int b){
         student o;
        o.x=a;
        o.y=b;
        cout<<o.x+o.y;
    }

};



int main() {
s o;
    o.getdata(20,30);
    return 0;
}


