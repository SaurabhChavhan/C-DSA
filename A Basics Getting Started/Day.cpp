#include <iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter Week Day Number:"<<endl;
    cin>>day;
    
    if(day==1){
        cout<<"Monday"<<endl;
    }
    else if(day==2){
        cout<<"Tuseday"<<endl;
    }
    else if(day==3){
        cout<<"Wednsday"<<endl;
    }
    else if(day==4){
        cout<<"Thursday"<<endl;
    }
    else if(day==5){
        cout<<"Friday"<<endl;
    }
    else if(day==6){
        cout<<"Saturday"<<endl;
    }
    else if(day==7){
        cout<<"Sunday"<<endl;
    }
    else{
        cout<<"Enter number between 1-7"<<endl;
    }
}