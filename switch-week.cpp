#include<iostream>
using namespace std;
int main(){
    //SWITCH:WEEK OF DAY******
    int day;
    cout<<"Enter a number(1-7):"<<endl;
    cin>>day;
    switch(day){
        case 1:
        cout<<"Mondy";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid day";
        
    }
    return 0;
}