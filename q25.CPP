#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0, count = 0, num, maxNum, minNum;
    string input;

    bool firstInput = true;

    while (true) {
        cout << "Enter an integer (or type 'exit' to quit): ";
        cin >> input;

        if (input == "exit") {
            break;
        }

        try {
            num = stoi(input); // Convert string to integer
            sum += num;
            count++;

            if (firstInput) {
                maxNum = num;
                minNum = num;
                firstInput = false;
            } else {
                if (num > maxNum) {
                    maxNum = num;
                }

                if (num < minNum) {
                    minNum = num;
                }
            }
        } catch (invalid_argument&) {
            cout << "Invalid input! Please enter an integer." << endl;
        }
    }

    if (count > 0) {
        cout << "Sum of all entered numbers: " << sum << endl;
        cout << "Count of valid integers entered: " << count << endl;
        cout << "Maximum number entered: " << maxNum << endl;
        cout << "Minimum number entered: " << minNum << endl;
    } else {
        cout << "No valid integers were entered." << endl;
    }

    return 0;
}
