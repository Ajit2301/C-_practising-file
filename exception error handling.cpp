#include<iostream>
using namespace std;

void number() {
    int a;
    int b;
    cout << "\nEnter the number A: ";
    cin >> a;

    cout << "Enter the number B: ";
    cin >> b;

    // Displaying the inputted numbers
    cout << "\nNumber A: " << a << "\nNumber B: " << b << endl;

    // Example condition for throwing an exception (you can customize this)
    if (a == b) {
        throw string("Numbers cannot be the same!"); // Throwing a string if the numbers are the same
    }
}

int main() {
    try {
        number(); // Calling the function

    }
    catch (const string& e) { // Catching the thrown string exception
        cout << "Exception caught: " << e << endl;
    }
    catch (...) { // Generic catch block for any other exceptions
        cout << "Undefined error" << endl;
    }

    return 0;
}
