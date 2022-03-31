#include <iostream>
#include <string>
using namespace std;

int main(){

    int days;
    cin>>days;

    switch(days){
        case 1:
                        cout<<"Im Sunday"<<endl;
                        break;

        case 2:
                        cout<<"Im Monday"<<endl;
                        break;
        case 3:
                        cout<<"Im Tuseday"<<endl;
                        break;
        case 4:
                        cout<<"Im Wednesday"<<endl;
                        break;
        case 5:
                        cout<<"Im Thursday"<<endl;
                        break;
        case 6:
                        cout<<"Im Friday"<<endl;
                        break;
        case 7:
                        cout<<"Im Saturday"<<endl;
                        break;
    }
}