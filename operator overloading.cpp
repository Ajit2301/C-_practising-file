#include<iostream>
using namespace std;
class complex{
private:
    int real,img;

public:
    complex(){real=0;img=0;}
    complex(int r,int i){real=r;img=i;}
    void display(){

    cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator +(complex o2){
    complex temp;
    temp.real=real+o2.real;
    temp.img=img+o2.img;
    return temp;
    }
};

int main()
{
    complex o1(10,20);
    complex o2(5,2);
    complex o3;
    o3=o1+o2;
    o3.display();

    return 0;


}























































