#include<iostream>
using namespace std; 
int main ( ){
     //DAY OF THE WEEK:
     int num;
     cout<< " Enter a number between 1 & 7:" <<endl;
     cin>>num;
     if(num==1)
     cout<< "You entered a monday " <<endl;
     if(num==2)
     cout<< "You entered a tuesday " <<endl;
     if(num==3)
     cout<< "You entered a wednesday " <<endl;

     if(num==4)
     cout<< "You entered a thursday" <<endl;

     if(num==5)
     cout<< "You entered a friday" <<endl;

     if(num==6)
     cout<< "You entered a saturday" <<endl;

     if(num==7)
     cout<< "You entered a sunday " <<endl;
    else
    cout<< " You entered invalid week" <<endl;

      return 0;
     }