#include <iostream>
#include <string>
using namespace std;

string concat(string s1, string s2) {
    return s1 + s2;
}

string concat(int num, string s) {
    return to_string(num) + s;  
}

int main() {
   
    cout << concat("Hello, ", "World!") << endl;  
    cout << concat(2025, " is the year") << endl;  

    return 0;
}
