#include <iostream>
#include <math.h>
using namespace std;
int main()
{ 
    int l,b,p,a;
    cout<<"enter length: ";
    cin>>l;
    cout<<"enter breadth: ";
    cin>>b;
    p = 2*(l+b);
    a = (l*b);
    cout<<"perimeter: "<<p<<endl;
    cout<<"area: "<<a;
    return 0;
}
