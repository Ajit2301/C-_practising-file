#include <iostream>
using namespace std;

int main() {
    int a[100], limit, i, j, temp;

    cout << "\nEnter the limit: ";
    cin >> limit;

    // Input the elements of the array
    for (i = 0; i < limit; i++) {
        cout << "\nEnter the number: ";
        cin >> a[i];
    }

    // Sort the array in ascending order using a simple Bubble Sort
    for (i = 0; i < limit; i++) {
        for (j = i + 1; j < limit; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output the sorted array
    cout << "\nSorted array: ";
    for (i = 0; i < limit; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
