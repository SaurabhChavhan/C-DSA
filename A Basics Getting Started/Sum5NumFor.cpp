#include <iostream>
using namespace std;

int main(){
    int sum, mul, sub, div, temp ;
    sum=0;
    mul=1;
    sub=0;
    div=1;

    for(int i=1; i<=5; i++){
        cin>>temp;
        sum+=temp;
        mul*=temp;
        sub-=temp;
        div/=temp;
    }
    cout<<"Sum is:"<<sum<<" "<<"Sub is:"<<sub<<" "<<"Mul is:"<<mul<<" "<<"Div is:"<<div<<endl;


}