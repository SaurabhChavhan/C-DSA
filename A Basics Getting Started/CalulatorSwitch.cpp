#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    cout<<"Enter NUM-1 nd NUM-2"<<endl;
    cin>>num1>>num2;
    char var;
    cout<<"Enter Varible from + - * /"<<endl;
    cin>>var;

    switch(var){

        case '+' :
                cout<<num1+num2<<endl;
                break;
        case '-':
                cout<<num1-num2<<endl;
                break;
        case '*':
                cout<<num1*num2<<endl;
                break;
        case '/':
                cout<<num1/num2<<endl;
                break;
        default:
                cout<<"Enter only + - * /"<<endl;



    }

}