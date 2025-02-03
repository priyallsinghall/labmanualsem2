#include <iostream>
using namespace std;

#define INT_BITS 8  // Define bit-width

// Circular Left Shift (ROL)
int circularLeftShift(int x, int k) {
    return (x << k) | (x >> (INT_BITS - k));
}

// Circular Right Shift (ROR)
int circularRightShift(int x, int k) {
    return (x >> k) | (x << (INT_BITS - k));
}

// Function to print binary representation of an integer
void printBinary(int num) {
    for (int i = INT_BITS - 1; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Ensure n fits within the defined bit-width
    n = n & ((1 << INT_BITS) - 1);  

    cout << "Binary form: ";
    printBinary(n);

    int s;
    cout << "Enter number of shifts: ";
    cin >> s;

    int leftShifted = circularLeftShift(n, s) & ((1 << INT_BITS) - 1);
    int rightShifted = circularRightShift(n, s) & ((1 << INT_BITS) - 1);

    cout << "After left shift: ";
    printBinary(leftShifted);
    cout << "After right shift: ";
    printBinary(rightShifted);

    return 0;
}
