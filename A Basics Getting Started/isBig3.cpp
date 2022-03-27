#include <iostream>
using namespace std;

int main(){
    int num1;
    cout<<"Enter Number 1:"<<endl;
    cin>>num1;
    int num2;
    cout<<"Enter Number 2:"<<endl;
    cin>>num2;
    int num3;
    cout<<"Enter Number 3:"<<endl;
    cin>>num3;


    if(num1>num2 && num1>num3){
        cout<<num1<<" is Big"<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" is Big"<<endl;
    }
    else{
        cout<<num3<<" 3 is Big"<<endl;
    }
}