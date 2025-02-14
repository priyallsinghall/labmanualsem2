/*Find the length of the longest subsequence of consecutive integers in an unsorted 
array. 
Example: 
Input: [1, 9, 3, 10, 2, 20] 
Output: 3 (The longest consecutive subsequence is [1, 2, 3]).*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        int j = a[i] + 1;
        while (true)
        {
            bool flag = false;
            for (int k = 0; k < n; k++)
            {
                if (a[k] == j)
                {
                    count++;
                    j++;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout << "Length of the longest subsequence of consecutive integers: " << max << endl;
    return 0;
}