#include <iostream>
using namespace std;

int main(){

    int num, n1, n2;
    cin>>num;
    n1=0;
    n2=1;

    for(int i=0; i<=num; i++){
        cout<<n1<<endl;
        int sum=n1+n2;
        n1=n2;
        n2=sum;

    }


}