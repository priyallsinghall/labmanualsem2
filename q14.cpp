#include <iostream>
using namespace std;
int main()
{ 

    int a,b,c;
    cout<<"enter side 1: ";
    cin>>a;
    cout<<"enter side 2: ";
    cin>>b;
    cout<<"enter side 3: ";
    cin>>c;
    if(a+b>c || a+c>b || b+c>a){
        cout<<"valid triangle!"<<endl;
        if(a==b && b==c && a==c){
            cout<<"equilateral triangle!";
        }
        else if(a==b || b==c || a==c){
            cout<<"isosceles triangle!";
        }
        else{
            cout<<"scalene traingle!";
        }
    }
    else{
        cout<<"invalid triangle!";
    }

    return 0;

  
}