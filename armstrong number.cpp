#include <iostream>
using namespace std;

int main() {
    int n,r,res,originalnum;
    cout<<"\n Enter the Number:";
    cin>>n;
    for( int i=0;i<n;i++){
    originalnum=n;
        res=0;
        while(originalnum!=0){
                r=originalnum%10;
        res+=r*r*r;
        originalnum/=10;
        }
    }


        if(res==n)
            cout<<"\n"<<n<<"the number is armstrong number";
         else
            cout<<"\n"<<n<<"the number is  not a armstrong number";


    return 0;
}


