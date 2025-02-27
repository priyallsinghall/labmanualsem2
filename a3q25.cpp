/* Write a function that takes an array of integers and its size as arguments and returns 
the sum of all elements in the array. */
#include<iostream>
using namespace std;
int sumOfArray(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    return arr[size-1]+sumOfArray(arr,size-1);
}
int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of elements of array is: "<<sumOfArray(arr,size)<<endl;
    return 0;
}