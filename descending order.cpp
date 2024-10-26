#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,n,temp;
    cout<<"\n Enter The Limit:";
    cin>>n;
    for(i=0;i<n;i++){
             cout<<"\n Enter The Number:";
    cin>>a[i];

    }
    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }
            }
    }
    cout<<"\n descending order:"<<endl;
             for(i=0;i<n;i++){
             cout<<a[i];
                }



    return 0;

}
