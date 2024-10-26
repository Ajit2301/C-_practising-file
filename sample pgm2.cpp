#include <iostream>
using namespace std;

int main() {
    string driver,gender;
    int age;
    cout<<"\n Enter the driver is Married or Unmarried:";
    cin>>driver;
    if(driver=="Married")
        cout<<"The  Male and Female driver is Insured";


    else if(driver=="Unmarried")
        cout<<"\n Enter Male or Female:";
        cin>>gender;
        cout<<"\n Enter Age:";
        cin>>age;
        if(gender=="Male" && age>=30)
        cout<<"The driver is Insured";
        if(gender=="Female" && age>=25)
        cout<<"The  Female  driver is Insured";



    else
         cout<<"The driver is Not-Eligible";


    return 0;
}

