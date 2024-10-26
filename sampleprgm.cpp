#include <iostream>
using namespace std;

int main() {
    int hardness, tensile, Grade;
    float carbon;

    cout << "Enter the hardness: ";
    cin >> hardness;
    cout << "Enter the carbon content: ";
    cin >> carbon;
    cout << "Enter the tensile strength: ";
    cin >> tensile;

    if (hardness > 50 && carbon < 0.7 && tensile > 5600)
        Grade = 10;
    else if (hardness > 50 && carbon < 0.7)
        Grade = 9;
    else if (carbon < 0.7 && tensile > 5600)
        Grade = 8;
    else if (hardness > 50 && tensile > 5600)
        Grade = 7;
    else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
        Grade = 6;
    else
        Grade = 5;

    cout << "The grade of the steel is: " << Grade << endl;
    return 0;
}
