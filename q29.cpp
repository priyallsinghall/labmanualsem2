#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a = 50;
    while(true){
        if(a%7==0){
            cout<<a;
            return 0;
        }
        a++;
    }
}