#include <iostream>
#include <limits.h> 

using namespace std;

void findSecondLargest(int arr[], int size, int &secondLargest) {
    if (size < 2) {
        cout << "Array must have at least two elements." << endl;
        secondLargest = INT_MIN; 
        return;
    }

    int largest = INT_MIN;
    secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i];        
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; 
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element found (all elements may be the same)." << endl;
    }
}

int main() {
    int size;
    cout<<"enter number of elements: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter element: ";
        cin>>arr[i];
    }

    int secondLargest;

    findSecondLargest(arr, size, secondLargest);

    if (secondLargest != INT_MIN) {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}