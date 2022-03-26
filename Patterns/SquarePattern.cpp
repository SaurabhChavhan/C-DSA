#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // This "I" wala for loop run once then it goes into "J" wala for loop, it prints upto n, then move towards again "I". 
    for(int i=1; i<=n; i++)
    {
        
        for(int j=1;j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
