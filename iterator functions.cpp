#include<iostream>
using namespace std;
int main()
{
    string str="Ajith Kumar";
    string ::iterator i;
    for (i=str.begin();i!=str.end();i++)
        cout<<*i<<endl;
        cout<<"------------->"<<endl;
        string ::reverse_iterator i2;

    for (i2=str.rbegin();i2!=str.rend();i2++)
        cout<<*i2<<endl;
    return 0;


}
