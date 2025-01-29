#include <iostream>
using namespace std;
int main()
{ 
    int a,b,c;
    cout<<"enter a no: ";
    cin>>a;
    cout<<"enter a no: ";
    cin>>b;
    c = b;
    b = a;
    a = c;
    cout<<a<<endl;
    cout<<b<<endl;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<a<<endl;
    cout<<b;

    return 0;
}
