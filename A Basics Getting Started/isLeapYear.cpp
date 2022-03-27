#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter Year"<<endl;
    cin>>year;

    if(year%4==0 || (year%100!=0 && year%400==0)){
        cout<<"It is Leap Year"<<endl;
    }
    else{
        cout<<"Not leap Year"<<endl;
    }



}