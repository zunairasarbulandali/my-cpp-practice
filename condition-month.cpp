#include<iostream>
using namespace std;
 int main ( ){
    //MONTH OF THE YEAR:
    int m,d;
     cout<< "Enter a  month and day:" <<endl;
     cin>>m>>d;
     if(m==1 && d<=31)
     cout<< "You entered a january" <<endl;
     if(m==2 && d<=29)
     cout<< "You entered a february" <<endl;
     if(m==3 && d<=31)
     cout<< "You entered a march" <<endl;
     if(m==4 && d<=30)
     cout<< "You entered a april" <<endl;
     if(m==5 && d<=31)
     cout<< "You entered a may" <<endl;
     if(m==6 && d<=30)
     cout<< "You entered a june" <<endl;
     if(m==7 && d<=31)
     cout<< "You entered a july" <<endl;
     if(m==8 && d<=31)
     cout<< "You entered a august" <<endl;
     if(m==9 && d<=30)
     cout<< "You entered a september" <<endl;
     if(m==10 && d<=31)
     cout<< "You entered a october" <<endl;
     if(m==11 && d<=30)
     cout<< "You entered a november" <<endl;
     if(m==12 && d<=31)
     cout<< "You entered a december" <<endl;
     else
     cout<< "You entered a invalid month and day" <<endl;
    return 0;
     }