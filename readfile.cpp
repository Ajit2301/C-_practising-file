#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string text;
    ifstream o("test.txt");
    while(getline(o,text)){
        cout<<text<<endl;
    }
       o.close();
       return 0;

}

