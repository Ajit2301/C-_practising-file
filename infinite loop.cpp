#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Option 1\n";
        cout << "2. Option 2\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You chose Option 1." << endl;
                break;
            case 2:
                cout << "You chose Option 2." << endl;
                break;
            case 3:
                cout << "Exiting..." << endl;
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

