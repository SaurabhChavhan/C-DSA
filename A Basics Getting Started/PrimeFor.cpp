#include <iostream>
using namespace std;

int main(){
    // int low, high, num, count;
    // cin>>low>>high;
    // count=0;

    // for(int range= low; range<=high; range++){
    //     for(int num=2; num<range; num++){
    //         if(range%num!=0){
    //         cout<<num<<endl;
                
    //         }
    //     }
    // }

    // int num;
    // cin>>num;
    int low, high;
    cin>>low>>high;

    for(int i=low; i<=high; i++){
    int count = 0;

        for(int j = 2; j<i; j++){      
            
            if(i%j==0){
                count++;
                break;
            }
        
        }
    
    if(count==0){
        cout<<i<<endl;
    }
    
    }
}