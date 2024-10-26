#include <iostream>
using namespace std;
template <class T>
void myswap(T &a,T &b){
       T t=a;
       a=b;
       b=t;

   }

int main() {
    int a=5,b=10;
    myswap(a,b);
    cout<<a<<":"<<b;


    return 0;
}

