#include<iostream>
using namespace std;
int main(){
//Write a program using a while loop to print numbers from 1 to 15.If the number becomes greater than 10, break the loop.
   /* int i=1;
    while(i<=15){
        if(i>10){
            break;
        }
    cout<<i<<endl;
    i++;
    }*/


    //Write a program using a while loop to print numbers from 1 to 10.Skip number 5 while printing.
   int i=1;
    while(i<=10){
        if(i==5){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }

    return 0;
}