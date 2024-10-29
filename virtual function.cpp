#include<iostream>
using namespace std;
class bike{
public:
     virtual void biker()
    {
        cout<<"\n The bike Start";
    }
};
class bullet: public bike{
public:
    void biker()
    {
        cout<<"\n The bike  running";
    }
};
int main()
{
    bike *o=new bullet ;

    o->biker();


}























































