#include <iostream>
using namespace std;
int factorial(int a){
    int ans = a;
    while(a>1){
        ans = ans*(a-1);
        a--;
    }
    return ans;
}
int main(){
    int a;
    cout<<"enter number: ";
    cin>>a;
    cout<<factorial(a);

    return 0;
}