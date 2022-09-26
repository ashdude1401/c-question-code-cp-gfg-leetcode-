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
    
    
    int arr1[row][colm];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<"enter the number in a["<<i<<"]"<<"["<<j<<"]\n";
            cin>>arr1[i][j];
        }
    }
    cout<<"the given matrix is \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
           cout<<arr1[i][j]<<" ";
           
        }
        cout<<endl;
    }
     int arr2[row][colm];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            arr2[i][j]=arr1[i][j]-arr[i][j];
        }
    }
    cout<<"the subtraction  of given matrix is \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
           cout<<arr2[i][j]<<" ";
           
        }
        cout<<endl;
    }
    return 0;

}