//Write a program to find the row in a 2D matrix that has the maximum sum of its elements.  
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
    int max=0,row=0;
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=a[i][j];
        }
        if(sum>max)
        {
            max=sum;
            row=i;
        }
    }
    cout<<"Row with maximum sum of elements: "<<row<<endl;
    return 0;
}