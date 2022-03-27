#include <iostream>
using namespace std;

int main(){
    char alpha;
    cout<<"Enter Character:"<<endl;
    cin>>alpha;

    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
        cout<<"It is Vowel"<<endl;
    }
    else{
        cout<<"It is Consonunt"<<endl;
    }
}