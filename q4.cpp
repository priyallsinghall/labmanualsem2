#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter a no: ";
    cin>>a;
    cout<<"enter a no: ";
    cin>>b;
    c = a/b;
    cout<<fixed<<setprecision(2)<<c;
    return 0;
}
