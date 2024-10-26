#include <iostream>
using namespace std;

int main() {
    int limit,table;
    cout<<"\n Enter The Limit:";
    cin>>limit;
    cout<<"\n Enter The Table:";
    cin>>table;
    for(int i=1;i<=limit;i++){
        cout<<i<<"*"<<table<<"="<<i*table<<endl;
    }
    return 0;
}
