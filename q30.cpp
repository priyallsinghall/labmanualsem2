#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int sum = 0;
    for(int i=1 ; i<=500; i++){
        if(i%3==0 && i%7==0){
            continue;
        }
        else{
            sum = sum +i;
            if(sum>1000){
                return 0;
            }
            cout<<i<<endl;
        }
    }
    return 0 ;
}