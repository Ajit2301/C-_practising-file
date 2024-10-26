#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result;

    cout << "Armstrong numbers between 100 and 999 are: " << endl;

    // Loop through all numbers from 100 to 999
    for (num = 100; num <= 999; num++) {
        originalNum = num;
        result = 0;

        // Calculate the sum of the cubes of its digits
        while (originalNum != 0) {
            remainder = originalNum % 10;  // Get the last digit
            result += remainder * remainder * remainder;  // Cube the digit and add to result
            originalNum /= 10;  // Remove the last digit
        }

        // Check if the sum of the cubes is equal to the original number
        if (result == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
