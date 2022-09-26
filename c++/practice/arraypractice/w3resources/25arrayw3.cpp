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
    for(int i=0;i<row;i++)
    {    int sum=0; 
        for(int j=0;j<colm;j++)
        {
            sum=sum +arr[i][j];
        }
        cout<<"the sum of row "<<i<<" is "<<sum<<endl;;
    }
    for(int j=0;j<colm;j++)
    {    int sum=0; 
        for(int i=0;i<row;i++)
        {
            sum=sum +arr[i][j];
        }
        cout<<"the sum of coloumn "<<j<<" is "<<sum<<endl;
    }
    return 0;

}