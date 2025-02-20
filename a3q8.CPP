#include <iostream>
using namespace std;

void print(string text) {
    cout << "String: " << text << endl;
}

void print(int num) {
    cout << "Integer: " << num << endl;
}

void print(string text, int num) {
    cout << "String: " << text << ", Integer: " << num << endl;
}

int main() {
    print("Hello");       
    print(42);            
    print("Age", 25);     
    
    return 0;
}
