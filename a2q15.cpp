//A saddle point is an element of the matrix that is the smallest in its row but the largest in its column. Write a program to find the saddle point.
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
    for(int i=0;i<r;i++)
    {
        int min=a[i][0],pos=0;
        for(int j=1;j<c;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
                pos=j;
            }
        }
        int max=a[0][pos];
        for(int j=1;j<r;j++)
        {
            if(a[j][pos]>max)
            {
                max=a[j][pos];
            }
        }
        if(min==max)
        {
            cout<<"Saddle point: "<<min<<endl;
            return 0;
        }
    }
    cout<<"No saddle point in the matrix."<<endl;
    return 0;
}