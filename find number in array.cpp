#include <iostream>
using namespace std;

int main() {
    int a[100], limit, i, x;

    // Input the limit of the array
    cout << "\nEnter the limit: ";
    cin >> limit;

    // Input the elements of the array
    for (i = 0; i < limit; i++) {
        cout << "\nEnter the number: ";
        cin >> a[i];
    }

    // Input the number to search for
    cout << "\nEnter the number to search: ";
    cin >> x;

    // Perform linear search
    for (i = 0; i < limit; i++) {
        if (a[i] == x) {
            cout << "\nThe number " << x << " is found at index " << i << ".";
            return 0;  // Exit the program after finding the number
        }
    }

    // If the number is not found
    cout << "\nThe number " << x << " is not found in the array.";

    return 0;
}
