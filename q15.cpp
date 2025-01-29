#include <iostream>
using namespace std;
int main()
{ 
    //solving (a**b + c&&d)
    int a,b,c,d;
    cout<<"enter number a: ";
    cin>>a;
    cout<<"enter number b: ";
    cin>>b;
    cout<<"enter number c: ";
    cin>>c;
    cout<<"enter number d: ";
    cin>>d;
    int ans = (a^b)+ c&d;
    cout<<ans;
    
    return 0;

  
}