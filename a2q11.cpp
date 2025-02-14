//Calculate the sum of elements on the primary and secondary diagonals of a square matrix. 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1+=a[i][i];
        sum2+=a[i][n-i-1];
    }
    cout<<"Sum of elements on the primary diagonal: "<<sum1<<endl;
    cout<<"Sum of elements on the secondary diagonal: "<<sum2<<endl;
    return 0;
}