#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream o("test.txt",ios::trunc);
    o<<"Ajithkumar"<<endl;
     o<<"servaikarnapatti"<<endl;
      o<<"Gujilimaparai TK"<<endl;
       o<<"Dindigul DT-624620"<<endl;
       o<<""<<endl;
       o.close();
       return 0;

}

