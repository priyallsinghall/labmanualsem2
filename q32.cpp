#include <iostream>
#include <vector>
#include <limits.h>  // For INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n < 2) {  // Check for invalid input size
        cout << "Array should have at least two elements.\n";
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        cout << "No second highest element found.\n";
    } else {
        cout << "Second highest element is: " << max2 << endl;
    }

    return 0;
}
