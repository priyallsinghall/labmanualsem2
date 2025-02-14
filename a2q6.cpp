//Implement a program to search for a specific number in an array using linear search.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number to search: ";
    cin>>num;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            cout<<"Element found at index "<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Element not found in the array."<<endl;
    }
    else
    {
        cout<<"Element found in the array."<<endl;
    }
    return 0;
}