#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of prime numbers to print: ";
    cin>>n;
    int count = 0;
    int s = 3;
    while(count<n){
        int f1 = 0;
        for(int i =2; i<s;i++){
            if(s%i==0){
                f1 = 1;
            }
            else{
                continue;
            }
        }
        if(f1==0){
            cout<<s<<endl;
                count++;
        }
        s = s+ 1;
    }
    return 0;
    
}