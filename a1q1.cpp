#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int factors = 0;
    cout<<"factors: 1 "<<n<<endl;
    //checking for prime and printing factors
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<i<<endl;
            factors++;
        }
        else{
            continue;
        }
    }
    int s = n;
    if(factors==0){
        cout<<"number is prime!"<<endl;
        while(true){
            s++;
            for(int i=2;i<s;i++){
                if(s%i==0){
                   cout<<"next number after "<<n<<" that is not prime is "<<s;
                   return 0;
            
                 }
            }
        }
        }
    else{
        cout<<"number not prime!";
    }

    return 0;
}