#include <iostream>
#include<math.h>
using namespace std;
int main()
{ 
    int a,b,c;
    cout<<"enter number with x**2: ";
    cin>>a;
    cout<<"enter number with x: ";
    cin>>b;
    cout<<"enter constant: ";
    cin>>c;
    int D = pow(b,2)-4*a*c;
    if(D>0){
        int x = (-b+ sqrt(D))/2*a;
        int y = (-b- sqrt(D))/2*a;
        cout<<"the roots of the equation are: "<<x<<","<<y;
    }
    else if(D==0){
        int x = -b/2*a;
        cout<<"the root of the equation is repeated which is: "<<x;
    }
    else{
        int real = -b/2*a;
        int img = sqrt(-D) / (2 * a);
        cout<<"root 1 is: "<<real<<"+ i*"<<img;
        cout<<"root 2 is: "<<real<<"- i*"<<img;
        
    }
    return 0;

  
}
