#include<iostream>
using namespace std;
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;           
        reversed = reversed * 10 + digit;  
        n /= 10;                      
    }
    return reversed; 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The reversed number is: " << reverseNumber(num) << endl;
    return 0;
}