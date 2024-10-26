#include <iostream>
using namespace std;

int main() {
    int i,n,sum=1;
    cout<<"\n Enter the Number:";
    cin>>n;
    for(i=1;i<n;i++){

        cout<<"\n"<<i;
         sum*=i;

    }
    cout<<"\n"<<sum;

    return 0;
}

