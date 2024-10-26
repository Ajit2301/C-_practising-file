#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "\nEnter the Number of Days: ";
    cin >> days;

    if (days <= 5) {
        cout << "\nThe Fine is 50 Paise";
    }
    else if (days > 5 && days <= 10) {
        cout << "\nThe Fine is 1 rupee";
    }
    else if (days > 10 && days <= 30) {
        cout << "\nThe Fine is 5 rupees";
    }
    else if (days > 30) {
        cout << "\nYour Membership is Cancelled";
    }

    return 0;
}
