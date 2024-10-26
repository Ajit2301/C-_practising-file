#include <iostream>
using namespace std;

int main() {
    int  a[100],limit,i,t;
    cout<<"\n Enter The limit:";
    cin>>limit;
    for(i=0;i<limit;i++)
    {
        cout<<"\nEnter the number";
        cin>>a[i];

    }
    t=a[0];
for(i=1;i<limit;i++)
    {
        if(t<a[i])
        t=a[i]-1;

}
cout<<"\n second largest Number is"<<t;


    return 0;
}


