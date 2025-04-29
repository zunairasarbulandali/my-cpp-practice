#include<iostream>
using namespace std;
 int main ( ){
     //LEAP YEAR:
     int year;
     cout<< "Enter a num:" <<endl;
     cin>>year;
     if((year%4==0 && year!=100) || (year%400==0))
     cout<< " A Leap Year" <<endl;
    else
    cout<< " Not Leap Year" <<endl;

      return 0;
     }
