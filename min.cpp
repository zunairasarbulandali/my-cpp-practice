#include<iostream>
using namespace std; 
int main ( ){
     //MINIMUM NUM 3:
     int n1,n2,n3;
     cout<< "Enter a num:" <<endl;
     cin>>n1>>n2>>n3;
     if(n1<=n2 && n1<=n3)
     cout<<"Minimum num:"<<n1<<endl;
     else if(n2<=n1 && n2<=n3)
     cout<<"Minimum num:"<<n2<<endl;
     else
     cout<<"Minimum num:"<<n3<<endl;



     

     return 0;
     }