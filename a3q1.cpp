#include <iostream>
using namespace std;
int maxNumber(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"enter numbers: ";
    cin>>a>>b;
    cout<<maxNumber(a,b);

    return 0;
}