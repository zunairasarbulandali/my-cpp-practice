#include<iostream>
using namespace std;
int main(){
    //BREAK & CONTINUE*****
    /*for(int i=1;i<=10; i++){
        if(i==5){
            break;//loop yhan ruk jiye ga
        }
        cout<<i<<endl;
    }*/
    for(int i =1; i<=10; i++){
        if(i==3){
            continue;//3 skip hojye ga
        }
          cout<<i<<endl;
    }
    return 0;
}