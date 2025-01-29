#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    int a;
    cout<< "enter name: ";
    getline(cin,n);
    cout<< "enter age: ";
    cin>> a; 
    cout << "Hello "<<n<<", you are "<<a<<" years old";
    return 0;
}