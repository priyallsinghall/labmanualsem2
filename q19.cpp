#include <iostream>
using namespace std;
int main()
{
    //q19
    int a;
    cout<<"enter marks: ";
    cin>>a;
    if(a>=90){
        cout<<"grade A";
    }
    else if(a<90 && a>=80){
        cout<<"grade B";
    }
    else if(a<80 && a>=60){
        cout<<"grade C";
    }
    else if(a<60){
        cout<<"grade D";
    }
    else{
        cout<<"wrong input!";
    }

     return 0;
  
}