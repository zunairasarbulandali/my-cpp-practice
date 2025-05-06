#include<iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter a number for table:"<<endl;
    cin>>num;
    while(i<=10){
        cout<< num << "*" << i << "=" << num*i <<endl;
        i++;
    }
    
    
}