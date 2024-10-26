#include <iostream>
using namespace std;

int main() {
    int n,i,c=0;
    cout<<"\n Enter the Number :";
    cin>>n;
    for (i=0;i<=n;i++){
            if(n%i==0)
                c++;
}
    if (c==2)
        cout<<"\n the number is prime number";
    else
     cout<<"\n the number is  not  prime number";
    return 0;
}
