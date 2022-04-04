#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;
    int i=1;
    cout<<"The table of "<<num <<" is: " <<endl;    
    while(i<=10){
        cout<<i*num<<endl;
        i++;
    }
}