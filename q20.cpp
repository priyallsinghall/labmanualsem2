#include <iostream>
#include <stdbool.h>
using namespace std;
int main()
{
    while(true){
        int n;
        int a,b;
        cout<<"enter choice: 1) Addition 2) Subtraction 3) Multiplication 4) Division 5) Exit ";
        cin>>n;
        switch(n){
            case 1: 
        cout<<"enter two integers: ";
        cin>>a>>b;
        cout<< a+b<<endl;
            break;
            case 2: cout<<"enter two integers: ";
        cin>>a>>b;
        cout<< a-b<<endl;
            break;
            case 3: cout<<"enter two integers: ";
        cin>>a>>b;
        cout<< a*b<<endl;
            break;
            case 4: cout<<"enter two integers: ";
        cin>>a>>b;
        cout<< a/b<<endl;
            break;
            case 5: return 0;
            default: "wrong input!";

        }   
    } 

     return 0;
  
}