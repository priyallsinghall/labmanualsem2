#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout<<"you have three attempts!";
    int ans = 87;
    int n = 3;
    while(n>0){
        int a;
        cout<<"enter: ";
        cin>>a;
        if(a>ans){
            cout<<"too high! ";
            n--;
            cout<<"you have "<<n<<" attempts left! ";
        }
        else if(a==ans){
            cout<<"right answer! ";
            return 0 ;
        }
        else if(a<ans){
            cout<<"too low! ";
            n--;
            cout<<"you have "<<n<<" attempts left! ";
        }
        else{
            cout<<"wrong input!";
            n--;
        }
    }
    cout<<"better luck next time!";
}