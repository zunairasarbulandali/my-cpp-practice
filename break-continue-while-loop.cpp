#include<iostream>
using namespace std;
int main(){
  /* write a program using a while loop that Prints numbers from 1 to 20
    Skip (using continue) the numbers that are divisible by 3
    Stop (using break) the loop if the number becomes greater than 15 */
    int i=1;
    while(i<=20){
        if(i%3==0){
            i++;
            continue;
        }
       
        if(i>15){
            break;
        }
        cout<<i<<endl;
        i++;
    }
}