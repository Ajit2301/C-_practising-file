#include<iostream>
using namespace std;

class Student {
private:
    static int x;
    string name;
    int age;

public:
    // Function to take input and display student information
    void dis() {
        x++;
        cout << "\nEnter the Name: ";
        getline(cin, name);  // Taking the name as input

        cout << "Enter the Age: ";
        cin >> age;
        cin.ignore();  // To ignore the newline character left in the buffer

        cout << "\nName: " << name << "\nAge: " << age << endl;
    }

    // Getter for name
    string getname() {
        return this->name;
    }

    // Getter for age
    int getage() {
        return this->age;
    }

    // Setter for name and age
    void setInfo(string n, int a) {
        this->name = n;
        this->age = a;
    }
    static int getcount(){
        return x;
    }
};
 int Student ::x=0;

int main() {
    Student o;

    // Display student information
    o.dis();

    // Setting the name and age using the setter
    o.setInfo("RAMKumar", 28);
    o.setInfo("RAMKumar", 28);
    o.setInfo("RAMKumar", 28);

    // Retrieving and displaying the new name and age
    cout << "\nRetrieved Name using getname(): " << o.getname() << endl;
    cout << "Retrieved Age using getage(): " << o.getage() << endl;
    cout<< "\n count:"<<Student::getcount()<<endl;

    return 0;
}

