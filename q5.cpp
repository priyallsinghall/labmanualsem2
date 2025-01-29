#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int p,r,t;
    int n =12;
    float s;
    cout<<"enter principal amount: ";
    cin>>p;
    cout<<"enter rate: ";
    cin>>r;
    cout<<"enter time: ";
    cin>>t;
    s = p * pow(1 + (float)r / (100 * n), n * t);
    cout<<s;
    return 0;
}
