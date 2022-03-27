#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number:"<<endl;
    cin>>num;

    if(num>0){
        cout<<"Positive"<<endl;
    }
    else if(num==0){
        cout<<"Zero"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
}