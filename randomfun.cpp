#include<iostream>
using namespace std;

void random(){
    int random;
    for( int i=0;i<10;i++){
        random=rand()%100;
        cout<<random<<endl;
    }
}

int main() {
    random();
    return 0;
}

