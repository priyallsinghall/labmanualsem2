//Write a program to search for a target value in a row-wise and column-wise sorted matrix. 
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter number of rows and columns of the matrix: ";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    int i=0,j=c-1;
    while(i<r && j>=0)
    {
        if(a[i][j]==target)
        {
            cout<<"Element found at index ("<<i<<","<<j<<")"<<endl;
            return 0;
        }
        else if(a[i][j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"Element not found in the matrix."<<endl;
    return 0;
}