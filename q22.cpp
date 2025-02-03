#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int c;
    int n;
    cout<<"upto which term fibonacci series: ";
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<n-2;i++){
        c= a+b;
        a = b;
        b =c;
        cout<<c<<endl;

    }
    return 0;
}