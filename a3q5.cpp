#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    int temp = n;
   int reversed = 0;
    while (n != 0) {
        int digit = n % 10;           
        reversed = reversed * 10 + digit;  
        n /= 10;                      
    }
    if(temp==reversed){
        return true;
    }
    else{
        return false;
    }


}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int ans = isPalindrome(num);
    if(ans==true){
        cout<<"is palindrome!";
    }
    else{
        cout<<"not palindrome!";
    }
    
    return 0;
}