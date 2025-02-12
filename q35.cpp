#include <iostream>
using namespace std;

int a, b;

// Function to calculate the HCF
int hcf(int x, int y) {
    int ans;
    if (a > b) {
        for (int i = b; i >= 1; i--) {
            if (a % i == 0 && b % i == 0) {
                ans = i;
                break;
            }
        }
    } else {
        for (int j = a; j >= 1; j--) {
            if (a % j == 0 && b % j == 0) {
                ans = j;
                break;
            }
        }
    }
    return ans;
}

// Function to calculate the LCM
int lcm(int x, int y) {
    int h = hcf(x, y); // Use HCF to calculate LCM
    return (x * y) / h;
}

int main(void) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int h = hcf(a, b);
    int l = lcm(a, b);

    cout << "HCF of " << a << " and " << b << " is: " << h << endl;
    cout << "LCM of " << a << " and " << b << " is: " << l << endl;

    return 0;
}
