#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter integer: ";
    cin>>n;
    cout << "Number of 1 bits: " << __builtin_popcount(n) << endl;
    return 0;
  
}
  