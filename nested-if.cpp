#include<iostream>
using namespace std;
int main(){
int m,a;
cout<<"Enter a marks and attendance percentage:"<<endl;
cin>>m>>a;
if(m>=90){
    if(a>=75){
        cout<<"Excellent student"<<endl;
    }
    else{
        cout<<"Good marks but low attendance"<<endl;
    }
}else{
    cout<<"Need improvement"<<endl;
}
return 0;
}
