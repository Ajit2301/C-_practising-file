#include <iostream>
using namespace std;

class student{
private:
    string name;
    char gender;
    int age;
public:
    void getdata(){

    cout<<"\n Enter The Name:";
    cin>>name;
    cout<<"\n Enter The Age:";
    cin>>age;
 cout<<"\n The Name is:"<<name<<"and the age is"<<age;
    }
    void display();

};
void student::display(){
    cout<<"\n Enter The gender:";
    cin>>gender;
 cout<<"\n The Gender is:"<<gender;

}

int main() {
    student o;
     o.getdata();
     o.display();




    return 0;
}

