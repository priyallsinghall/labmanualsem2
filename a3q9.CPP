#include <iostream>
using namespace std;

class Calculator {
public:
  
    int sum(int a, int b) {
        return a + b;
    }

    double sum(double a, double b, double c) {
        return a + b + c;
    }

    float sum(int a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    cout << "Sum of 5 and 10: " << calc.sum(5, 10) << endl;
    cout << "Sum of 2.5, 3.5, and 4.5: " << calc.sum(2.5, 3.5, 4.5) << endl;
    cout << "Sum of 7 and 2.5: " << calc.sum(7, 2.5f) << endl;

    return 0;
}
