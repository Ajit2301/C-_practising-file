#include <iostream>
using namespace std;
class shape{
public:
    int l,b,r;

};
class rectangle:public shape{
public:
    void dimensions(){
     cout<<"\nEnter the length:";
    cin>>l;
    cout<<"\nEnter the breadth:";
    cin>>b;
    }
    void rectanglearea(){
        cout<<"\nArea of rectangle:"<<l*b;

    }

};
class square:public shape{
public:
    void dimensions(){
     cout<<"\nEnter the length:";
    cin>>l;

    }
    void squarearea(){
        cout<<"\nArea of square:"<<l*l;

    }

};
class circle:public shape{
public:
    void dimensions(){
     cout<<"\nEnter the radius:";
    cin>>r;

    }
    void circlearea(){
        cout<<"\nArea of circle:"<<3.14*r*r;

    }

};

int main() {
    rectangle o;
    o.dimensions();
     o.rectanglearea();

      square o1;
    o1.dimensions();
     o1.squarearea();
      circle o2;
    o2.dimensions();
     o2.circlearea();







    return 0;
}


