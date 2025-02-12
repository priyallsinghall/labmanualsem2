#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x,r,rev;
    cout<<"enter number to be reversed: ";
    cin>>x;
    int o = x;
    rev = 0;
    while (x!=0){
        r = (x%10);
        rev = ((rev*10) + r);
        x=x/10;
    }
    if(o==rev){
        cout<<"palindrome number!";
        return 0 ;
    }
    cout<<"reversed number is: "<<rev;

    return 0 ;
}