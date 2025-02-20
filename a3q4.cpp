#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    
    while (n != 0) {
        int digit = n % 10;  
        sum += digit;      
        n /= 10;             
    }
    
    return sum;  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The sum of the digits is: " << sumOfDigits(num) << endl;
    
    return 0;
}