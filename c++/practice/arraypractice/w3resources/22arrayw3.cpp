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
    int arr1[colm][row];
    for(int i=0;i<colm;i++)
    {
        for(int j=0;j<row;j++)
        {
            arr1[i][j]=arr[j][i];
        }

    }
    cout<<"Transpose of a matrices\n ";
    for(int i=0;i<colm;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
    
    
    return 0;

}