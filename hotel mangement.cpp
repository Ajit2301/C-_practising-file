#include <iostream>
#include <string>
using namespace std;

// Base class Hotel
class Hotel {
protected:
    int roomNumber;
    string customerName;
    int numberOfNights;
    double roomRate;
    double totalBill;

public:
    // Method to input basic booking details
    void inputDetails() {
        cout << "Enter customer name: ";
        cin >> customerName;
        cout << "Enter room number: ";
        cin >> roomNumber;
        cout << "Enter number of nights: ";
        cin >> numberOfNights;
    }
};

// Derived class for Room Booking
class RoomBooking : public Hotel {
public:
    void bookRoom() {
        inputDetails();  // Accessing protected members from base class
        cout << "Enter room rate per night: ";
        cin >> roomRate;
        totalBill = numberOfNights * roomRate;
        cout << "\nRoom booked successfully for " << customerName << " in room " << roomNumber << ".";
        cout << "\nTotal cost for room booking: $" << totalBill << endl;
    }
};

// Derived class for Food Order
class FoodOrder : public Hotel {
private:
    int numberOfMeals;
    double mealCost;

public:
    void orderFood() {
        cout << "\nEnter number of meals ordered: ";
        cin >> numberOfMeals;
        cout << "Enter cost per meal: ";
        cin >> mealCost;
        double foodBill = numberOfMeals * mealCost;
        totalBill += foodBill;  // Add to the existing total bill
        cout << "\nFood ordered successfully for " << customerName << ".";
        cout << "\nTotal cost for food order: $" << foodBill << endl;
    }
};

// Derived class for Checkout
class Checkout : public Hotel {
public:
    void finalCheckout() {
        cout << "\nChecking out " << customerName << " from room " << roomNumber << ".";
        cout << "\nTotal bill amount: $" << totalBill << endl;
    }
};

// Main function to demonstrate the Hotel Management System
int main() {
    int choice;
    RoomBooking roomBooking;
    FoodOrder foodOrder;
    Checkout checkout;

    while (true) {
        cout << "\n--- Hotel Management System ---";
        cout << "\n1. Book a Room";
        cout << "\n2. Order Food";
        cout << "\n3. Checkout";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            roomBooking.bookRoom();
            break;
        case 2:
            foodOrder.orderFood();
            break;
        case 3:
            checkout.finalCheckout();
            break;
        case 4:
            cout << "\nThank you for using the Hotel Management System!";
            return 0;
        default:
            cout << "\nInvalid choice. Please try again.";
        }
    }

    return 0;
}

