#include <iostream>
using namespace std;

class student{
private:
    string name;
    int age;
public:
    void getdata(){

    cout<<"\n Enter The Name:";
    cin>>name;
    cout<<"\n Enter The Age:";
    cin>>age;
 cout<<"\n The Name is:"<<name<<"and the age is"<<age;
    }

};

int main() {
    student o;
     o.getdata();




    return 0;
}

