#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number to check if prime or not: ";
    cin>>n;
    int s = 2;
    while(s<n){
        if(n%s==0){
            cout<<"the number is not prime";
            return 0;
        }
        else{
            break;
        }
        s++;
    }
    cout<<"the number is prime";
    return 0;
}