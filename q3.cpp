#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a no: ";
    cin>>a;
    cout<<"enter a no: ";
    cin>>b;
    cout<<"enter a choice: 1)add(+) 2)subtract(-) 3)multiply(*) 4)divide(/) ";
    cin>>c;
    switch(c){
        case 1: cout<< a+b;
        break;
        case 2: cout<< a-b;
        break;
        case 3: cout<< a*b;
        break;
        case 4: cout<< a/b;
        break;
        default: cout<<"wrong choice";
    }
    return 0;
}
