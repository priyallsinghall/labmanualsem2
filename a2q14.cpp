//Print all the boundary elements of a matrix.
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
    cout<<"Boundary elements of the matrix: ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                cout<<a[i][j]<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
    }
    cout<<endl;
    return 0;
}