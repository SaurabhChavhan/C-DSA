#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count=0;

    for(int i=2; i<num; i++ ){
        if(num%i==0){
            count++;
        }
        

    }
    if (count>0)
    {
        cout<<"Not Prime"<<endl;
    }
    
    else{
        cout<<"Prime"<<endl;
    }
    
    

    return 0;
}