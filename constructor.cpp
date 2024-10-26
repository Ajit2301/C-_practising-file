#include <iostream>
using namespace std;

class student{
private:
    string name;
    char gender;
    int age;
public:
    student(string x,int y){
        name=x;
        age=y;

        }
         student(student &x){
        name=x.name;
        age=x.age;

        }
    void getdata(){


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
    student o("kumar",28);
    student o1(o);
     o.getdata();
     o.display();
     o1.getdata();




    return 0;
}


