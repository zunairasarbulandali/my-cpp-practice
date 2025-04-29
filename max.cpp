#include<iostream>
using namespace std;
int main(){
    //max 4 numbers:
    int num1,num2,num3,num4;
    cout<< "Enter a number:" <<endl;
    cin>>num1>>num2>>num3>>num4;
    if(num1>=num2 && num1>=num3 && num1>=num4)
    cout<< "Max num is:" <<num1<<endl;
   else if(num2>=num1 && num2>=num3 && num2>=num4)
    cout<< "Max num is:" <<num2<<endl;
   else if(num3>=num1 && num3>=num2 && num3>=num4)
    cout<< "Max num is:" <<num3<<endl;
else
cout<< "Max num is:" <<num4<<endl;
return 0;




}
