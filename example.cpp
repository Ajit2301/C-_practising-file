#include<iostream>
using namespace std;

class Shop {
protected:
    int option; // Declare 'option' as protected to be accessible by derived classes
public:
    void getorder() {
        cout << "\n Enter the option you want:\n 1. Tea: Rs15 \n 2. Coffee: Rs20 \n 3. Milk: Rs20 \n 4. Drinks: Rs40 \n 5. Exit\n";
        cin >> option;
    }
    int getOption() { // Getter to access the option
        return option;
    }
};

class Tea : public Shop {
private:
    int quantity;
public:
    int tea() {
        cout << "\nYou prefer Tea";
        cout << "\nEnter the quantity of Tea: ";
        cin >> quantity;
        int price = quantity * 15;
        cout << "\nYour total Tea price is: Rs" << price << endl;
        return price;
    }
};

class Coffee : public Shop {
private:
    int quantity;
public:
    int coffee() {
        cout << "\nYou prefer Coffee";
        cout << "\nEnter the quantity of Coffee: ";
        cin >> quantity;
        int price = quantity * 20;
        cout << "\nYour total Coffee price is: Rs" << price << endl;
        return price;
    }
};

class Milk : public Shop {
private:
    int quantity;
public:
    int milk() {
        cout << "\nYou prefer Milk";
        cout << "\nEnter the quantity of Milk: ";
        cin >> quantity;
        int price = quantity * 20;
        cout << "\nYour total Milk price is: Rs" << price << endl;
        return price;
    }
};

class Drinks : public Shop {
private:
    int quantity;
public:
    int drinks() {
        cout << "\nYou prefer Drinks";
        cout << "\nEnter the quantity of Drinks: ";
        cin >> quantity;
        int price = quantity * 40;
        cout << "\nYour total Drinks price is: Rs" << price << endl;
        return price;
    }
};

int main() {
    int total = 0; // Initialize total price to zero

    while (true) {
        Shop order;
        order.getorder();

        int option = order.getOption(); // Get the selected option
        int price = 0;

        switch (option) {
            case 1: {
                Tea t;
                price = t.tea();
                break;
            }
            case 2: {
                Coffee c;
                price = c.coffee();
                break;
            }
            case 3: {
                Milk m;
                price = m.milk();
                break;
            }
            case 4: {
                Drinks d;
                price = d.drinks();
                break;
            }
            case 5:
                cout << "\nThank you for visiting! Your total amount is: Rs" << total << endl;
                return 0; // Exit the loop and program
            default:
                cout << "\nInvalid option. Please try again.\n";
                continue; // Continue loop if an invalid option is entered
        }

        total += price; // Add the price of the selected item to the total
        cout << "Running total: Rs" << total << endl;
    }

    return 0;
}
