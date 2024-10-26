#include<iostream>
using namespace std;
class base{
protected:
    int a,b;
public:
    void display(){
    cout<<"\n Enter the value of A:";
    cin>>a;
    cout<<"\n Enter the value of B:";
    cin>>b;
    cout<<"\n Sum:"<<a+b<<"\n Sub:"<<a-b<<"\n Multiply:"<<a*b<<"\n Division:"<<a/b<<"\n Remainder:"<<a%b;
    }
};
class derived:public base{
protected:
    int c;
public:
    void display(){
          cout<<"\n Enter the value of A:";
    cin>>a;
    cout<<"\n Enter the value of B:";
    cin>>b;
    cout<<"\n Enter the value of c:";
    cin>>c;

    cout<<"\n Sum:"<<a+b+c<<"\n Sub:"<<a-b-c<<"\n Multiply:"<<a*b*c<<"\nDivision:"<<a/b/c<<"\nRemainder:"<<a%b%c;
    }
};
int main()
{
    base o;
    o.display();
    derived o1;
    o1.display();
    return 0;


}






















































