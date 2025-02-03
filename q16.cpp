#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter integer 1: ";
    cin>>a;
    cout<<"enter integer 2: ";
    cin>>b;
     if((a^b)<0)
    {
        cout<<"Opposite signs";
    }
    else
    {
        cout<<"Same signs";
    }
    return 0; 
  
}