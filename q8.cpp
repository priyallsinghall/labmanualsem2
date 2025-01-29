#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    string c;
    int a;
    cout<<"enter full name: ";
    getline(cin,c);
    cout<<"enter age: ";
    cin>>a;
    int d = (a*365)+a/4;
    cout<<"hello I am "<<c<<" I have lived "<<d<<" days.";
    return 0;
}
