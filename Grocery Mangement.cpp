#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Base class GroceryShop
class GroceryShop {
protected:
    string  customerName;
    vector<string> items;
    vector<double> prices;
    double totalBill;

public:
    GroceryShop() : totalBill(0.0) {} // Initialize totalBill to 0

    void inputCustomerDetails() {
        cout << "Enter customer name: ";
        cin >> customerName;
    }

    void displayTotal() {
        cout << "\nTotal bill for " << customerName << ": $" << totalBill << endl;
    }
};

// Derived class for Fruits
class Fruits : public GroceryShop {
public:
    void addFruit() {
        string fruitName;
        double price;
        cout << "Enter fruit name: ";
        cin >> fruitName;
        cout << "Enter price per kg: ";
        cin >> price;
        items.push_back(fruitName);
        prices.push_back(price);
        totalBill += price; // Add to total bill
        cout << fruitName << " added. Total cost for " << fruitName << ": $" << price << endl;
    }
};

// Derived class for Vegetables
class Vegetables : public GroceryShop {
public:
    void addVegetable() {
        string vegetableName;
        double price;
        cout << "Enter vegetable name: ";
        cin >> vegetableName;
        cout << "Enter price per kg: ";
        cin >> price;
        items.push_back(vegetableName);
        prices.push_back(price);
        totalBill += price; // Add to total bill
        cout << vegetableName << " added. Total cost for " << vegetableName << ": $" << price << endl;
    }
};

// Derived class for Dairy
class Dairy : public GroceryShop {
public:
    void addDairyProduct() {
        string dairyName;
        double price;
        cout << "Enter dairy product name: ";
        cin >> dairyName;
        cout << "Enter price: ";
        cin >> price;
        items.push_back(dairyName);
        prices.push_back(price);
        totalBill += price; // Add to total bill
        cout << dairyName << " added. Total cost for " << dairyName << ": $" << price << endl;
    }
};

// Main function to demonstrate the Grocery Shop Management System
int main() {
    int choice;
    GroceryShop shop;

    shop.inputCustomerDetails();

    while (true) {
        cout << "\n--- Grocery Shop Management System ---";
        cout << "\n1. Add Fruits";
        cout << "\n2. Add Vegetables";
        cout << "\n3. Add Dairy Products";
        cout << "\n4. Display Total Bill";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Fruits fruit;
                fruit.addFruit();
                break;
            }
            case 2: {
                Vegetables vegetable;
                vegetable.addVegetable();
                break;
            }
            case 3: {
                Dairy dairy;
                dairy.addDairyProduct();
                break;
            }
            case 4:
                shop.displayTotal();
                break;
            case 5:
                cout << "\nThank you for using the Grocery Shop Management System!";
                return 0;
            default:
                cout << "\nInvalid choice. Please try again.";
        }
    }

    return 0;
}

