#include <iostream>
using namespace std;

int main() {
    int  a[100],limit,i,x=0;
    cout<<"\n Enter The limit:";
    cin>>limit;
    for(i=0;i<limit;i++)
    {
        cout<<"\nEnter the number";
        cin>>a[i];
        x+=a[i];
        cout<<"\n Total:"<<x;
    }
     cout<<"\n Total:"<<x;


    return 0;
}


