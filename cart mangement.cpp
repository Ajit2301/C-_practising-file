#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Product class to represent a product in the store
class Product {
    int productID;
    string name;
    double price;
    int stock;

public:
    // Constructor
    Product(int id, string n, double p, int s) : productID(id), name(n), price(p), stock(s) {}

    // Getters
    int getProductID() const { return productID; }
    string getName() const { return name; }
    double getPrice() const { return price; }
    int getStock() const { return stock; }

    // Function to update stock
    void updateStock(int quantity) {
        stock -= quantity;
    }
};

// Customer class to represent a customer
class Customer {
    string name;

public:
    // Constructor
    Customer(string n) : name(n) {}

    // Getters
    string getName() const { return name; }
};

// CartItem class to represent an item in the cart
class CartItem {
    Product product;
    int quantity;

public:
    // Constructor
    CartItem(Product p, int q) : product(p), quantity(q) {}

    // Getters
    Product getProduct() const { return product; }
    int getQuantity() const { return quantity; }
    double getTotalPrice() const { return product.getPrice() * quantity; }

    // Update quantity
    void updateQuantity(int q) {
        quantity = q;
    }
};

// Cart class to represent a shopping cart
class Cart {
    vector<CartItem> items;

public:
    // Add product to cart
    void addToCart(Product product, int quantity) {
        // Check if the product is already in the cart
        for (auto &item : items) {
            if (item.getProduct().getProductID() == product.getProductID()) {
                item.updateQuantity(item.getQuantity() + quantity);
                return;
            }
        }
        items.push_back(CartItem(product, quantity));
    }

    // Remove product from cart
    void removeFromCart(int productID) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getProduct().getProductID() == productID) {
                items.erase(it);
                return;
            }
        }
    }

    // Display cart details
    void displayCart() const {
        cout << "\nYour Cart:\n";
        for (const auto &item : items) {
            cout << "Product: " << item.getProduct().getName()
                 << " | Quantity: " << item.getQuantity()
                 << " | Price: $" << item.getProduct().getPrice()
                 << " | Total: $" << item.getTotalPrice() << endl;
        }
    }

    // Calculate total amount
    double calculateTotal() const {
        double total = 0;
        for (const auto &item : items) {
            total += item.getTotalPrice();
        }
        return total;
    }
};

// Order class to handle orders
class Order {
    Customer customer;
    Cart cart;
    double totalAmount;

public:
    // Constructor
    Order(Customer c, Cart crt) : customer(c), cart(crt), totalAmount(crt.calculateTotal()) {}

    // Display order details
    void generateInvoice() const {
        cout << "\n----- Invoice -----\n";
        cout << "Customer: " << customer.getName() << endl;
        cart.displayCart();
        cout << "Total Amount: $" << totalAmount << endl;
        cout << "-------------------\n";
    }
};

int main() {
    // Create products
    Product p1(1, "Laptop", 800.00, 5);
    Product p2(2, "Smartphone", 500.00, 10);
    Product p3(3, "Headphones", 150.00, 15);

    // Create a customer
    Customer customer("Ajithkumar Anbarasu");

    // Create a shopping cart
    Cart cart;
    cart.addToCart(p1, 1);  // Add 1 Laptop to the cart
    cart.addToCart(p2, 2);  // Add 2 Smartphones to the cart
    cart.addToCart(p3, 3);  // Add 3 Headphones to the cart

    // Display the cart
    cart.displayCart();

    // Create an order and generate invoice
    Order order(customer, cart);
    order.generateInvoice();

    return 0;
}

