#include <iostream>
#include <cstdarg> 
using namespace std;

int findLargest(int count, ...) {
    va_list args; 
    va_start(args, count);  

     int largest = va_arg(args, int);
    for (int i = 1; i < count; i++) {
        int temp = va_arg(args, int);
        if (temp > largest) {
            largest = temp;
        }
    }

    va_end(args); 
    return largest;
}

int main() {
    cout << "largest element is: "<< findLargest(3, 3, 5, 7) << endl;
    cout << "largest element is: "<< findLargest(5, 10, 20, 30, 40, 50) << endl;
    return 0;
}