#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number to calculate factorial of: ";
    cin>>n;
    int ans = 1;
    int s = n;
    if(n==0){
        cout<<"the factorial is: 1";
        return 0;
    }
    do{
        ans = ans*s;
        s--;
    }
    while(s>1);
    cout<<"the factorial is: ";
    cout<<ans;
    
    return 0;
}