#include <iostream>

using namespace std;


int* generateFibonacci(int n) {
    if (n <= 0) return nullptr; 

    int* fibArray = new int[n]; 

 
    if (n >= 1) fibArray[0] = 0;
    if (n >= 2) fibArray[1] = 1;

    
    for (int i = 2; i < n; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }

    return fibArray; 
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;

    int* fibSeries = generateFibonacci(n);

    if (fibSeries) {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; i++) {
            cout << fibSeries[i] << " ";
        }
        cout << endl;

        delete[] fibSeries; 
    } else {
        cout << "Invalid input. Please enter a positive number." << endl;
    }

    return 0;
}
