#include <iostream>
using namespace std;

int main() {
    string name;
    int vowelCount = 0;
    cout << "Enter the Name: ";
    getline(cin,name);

    // Loop through each character in the name and print vowels

    for (int i = 0; i < name.length(); i++) {
        char ch = name[i];
        // Check if the character is a vowel (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " ";
            vowelCount++;
        }
         cout << "Vowels in the name: "<<ch;
    }

    cout << "\nTotal number of vowels: " << vowelCount << endl;

    return 0;
}
