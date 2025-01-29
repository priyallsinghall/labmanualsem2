#include <iostream>
using namespace std;
int main()
{ 
    int a,b;
    cout<<"enter number: ";
    cin>>a;
    cout<<"enter number: ";
    cin>>b;
    if(a!=0 && a%b==0){
        cout<<"first no. is a multiple of second no.";
    }
    else{
        cout<<"not a multiple";
    }
    return 0;
  
}
