#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int largest = arr[0], secondLargest = arr[0];
    int smallest = arr[0], secondSmallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondLargest == largest) {
        cout << "No second largest element.\n";
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    if (secondSmallest == smallest) {
        cout << "No second smallest element.\n";
    } else {
        cout << "Second smallest element: " << secondSmallest << endl;
    }

    return 0;
}
