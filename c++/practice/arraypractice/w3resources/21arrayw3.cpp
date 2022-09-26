#include<iostream>
using namespace std;
int main()
{
    int row,colm;
    cout<<"enter the number of rows and columns in the matrix\n";
    cin>>row>>colm;
    int arr[row][colm];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<"enter the number in a["<<i<<"]"<<"["<<j<<"]\n";
            cin>>arr[i][j];
        }
    }
    cout<<"the given matrix is \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
           cout<<arr[i][j]<<" ";
           
        }
        cout<<endl;
    }
    int row1,colm1;
    cout<<"enter the rows and coloumn";
    cin>>row1>>colm1;
    if(row1==colm)
    {
        int arr1[row1][colm1];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<colm1;j++)
        {
            cout<<"enter the number in a["<<i<<"]"<<"["<<j<<"]\n";
            cin>>arr1[i][j];
        }
    }
    cout<<"the given matrix is \n";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<colm1;j++)
        {
           cout<<arr1[i][j]<<" ";
           
        }
        cout<<endl;
    }
     int arr2[row][colm1];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm1;j++)
        {
            arr2[i][j]=arr1[i][j]*arr[j][i];
        }
    }
    cout<<"the multilication  of given matrix is \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm1;j++)
        {
           cout<<arr2[i][j]<<" ";
           
        }
        cout<<endl;
    }
    }
    else
    {
        cout<<"multiplication not possible";
    }
    return 0;

}