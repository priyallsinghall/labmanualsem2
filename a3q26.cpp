/* Write a function that takes an array and its size as arguments and returns the 
maximum element. */
#include<iostream>
using namespace std;
int findMax(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    int max=arr[size-1];
    int temp=findMax(arr,size-1);
    if(temp>max)
    {
        max=temp;
    }
    return max;
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
    cout<<"Maximum element of array is: "<<findMax(arr,size)<<endl;
    return 0;
}