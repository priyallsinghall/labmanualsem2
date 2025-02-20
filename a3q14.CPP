#include <iostream>
#include <cmath>  // For pow() function
using namespace std;

class Calculator {
public:

    int power(int base, int exponent) {
        return pow(base, exponent); 
    }

    double power(double base, int exponent) {
        return pow(base, exponent); 
    }
};

int main() {
    Calculator calc;

    cout << "2^3 = " << calc.power(2, 3) << endl;          
    cout << "2.5^3 = " << calc.power(2.5, 3) << endl;      

    return 0;
}
