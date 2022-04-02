#include <iostream>
using namespace std;
int main() {
    char chr;
    cin>>chr;
    
    if(chr>='A'&& chr<='Z'){
        cout<<"Capital"<<endl;
    }
    else if( chr>='a' && chr<='z'){
        cout<<"Not Capital"<<endl;
    }
    else{
        cout<<"Enter correct Char"<<endl;
    }

    return 0;
}