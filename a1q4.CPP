#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int spiral[n][n];  // 2D array for spiral pattern
    int left = 0, right = n - 1, top = 0, bottom = n - 1, num = 1;

    // Fill the matrix in a spiral order
    while (num <= n * n) {
        for (int i = left; i <= right; i++)  // Left to right
            spiral[top][i] = num++;
        top++;

        for (int i = top; i <= bottom; i++)  // Top to bottom
            spiral[i][right] = num++;
        right--;

        for (int i = right; i >= left; i--)  // Right to left
            spiral[bottom][i] = num++;
        bottom--;

        for (int i = bottom; i >= top; i--)  // Bottom to top
            spiral[i][left] = num++;
        left++;
    }

    // Print the spiral matrix
    cout << "Spiral pattern:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << spiral[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
