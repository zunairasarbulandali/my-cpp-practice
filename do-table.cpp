#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number for table:"<<endl;
    cin>>num;
    int i=1;
    do
    {
    cout<< num << "*" <<i <<"=" <<num*i<<endl;
    i++;
    }
    while(i<=10);
    return 0;
}