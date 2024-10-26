#include<iostream>
using namespace std;
class student{
private:
    int x;

public:
   student(int a):x(a){
       cout<<"\n"<<x;

   }
   };
   class s:public student{
private:

    int y;
public:
     s(int a,int b):student(a),y(b){
       cout<<"\n"<<y;

   }
   };


int main() {
s o(25,35);
return 0;

}


