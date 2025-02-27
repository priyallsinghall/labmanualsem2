/*Write a function int factorial(int n) that takes a number as input and returns its factorial*/
#include<iostream>
using namespace std;
long long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;
    return 0;
}