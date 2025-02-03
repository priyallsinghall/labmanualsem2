#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter year: ";
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                cout<<"leap year!";
                return 0;
            }
            else{
                cout<<"not a leap year!";
                return 0;
            }
        }
        else{
            cout<<"leap year!";
            return 0;
        }
    }
    else{
        cout<<"not a leap year!";
        return 0;
    }
    return 0;

}