#include <iostream>
#include<math.h>
#include <string>
using namespace std;
int main()
{ 
    int c;
    int d,w;
    int s = 0;
    start:
    cout<<"ATM MACHINE enter choice: 1)deposit 2) withdrawal 3)balance 4) exit"<<endl;
    cin>>c;
    while(true){
    switch(c){
        case 1: cout<< "enter amount to be deposited: ";
        cin>>d;
        s = s+d;
        cout<<"money deposited!"<<endl;
        goto start;
        case 2: cout<<"enter amount to be withdrawed: ";
        cin>>w;
        if(w>s){
            cout<<"not possible!"<<endl;
        }
        else{
            s = s-w;
            cout<<"money withdrawed!"<<endl;
        }
        goto start;
        case 3: cout<<"showing available balance: ";
        cout<<s<<endl;
        goto start;
        case 4: return 0;
        default: cout<<"wrong input!";


    }
    }
    
    
    return 0;

  
}
