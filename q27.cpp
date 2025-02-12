#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    cout<<"enter start of range: ";
    cin>>a;
    cout<<"enter end of range: ";
    cin>>b;
    int count = 0;
    for(int i = a; i <=b;i++){
        int s = 0;
        int len = 0;
        int i1 = i;
        int temp = i;
        while(temp>0){
            len++;
            temp = temp/10;

        }
        temp = i;
        while(temp>0){
            int digit = temp%10;
            s = s+ pow(digit,len);
            temp = temp/10;
        }
        if(s==i1){
            count++;
        }

    }
    cout<<"number of armstrong numbers in given range: "<<count;
    return 0 ;

}