//Multiply two matrices of appropriate dimensions.
#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter number of rows and columns of the first matrix : ";
    cin>>r1>>c1;
    cout<<"Enter number of rows and columns of the second matrix : ";
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"Matrix multiplication not possible."<<endl;
        return 0;
    }
    int a[r1][c1],b[r2][c2],res[r1][c2];
    cout<<"Enter the elements of the first matrix: ";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix: ";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            res[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"Resultant matrix after multiplication: "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}