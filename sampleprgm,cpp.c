#include <iostream>
using namespace std;

int main() {
    int steel,hardness,tensile,Grade;
    cout<<"\n Enter the Steel strength";
    cin>>steel;
    hardness=>50;
    float carbon=<0.7;
    tensile=>5600;
    if(hardness && carbon && tensile)
        Grade=10;
    else if((hardness && carbon)||tensile)
        Grade=9;
    else if( carbon &&tensile) || hardness)
        Grade=8;
        else if( hardness &&tensile) || carbon)
        Grade=7;
        else if( hardness ||tensile || carbon)
        Grade=6;
        else
            Grade=5;
    cout<<Grade;
    return 0;
}

