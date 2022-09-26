#include<iostream>
using namespace std;
int main()
{
    int row,sum=0;
    cout<<"enter the size of  square matrix\n";
    cin>>row;
    int arr[row][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<"enter the number in a["<<i<<"]"<<"["<<j<<"]\n";
            cin>>arr[i][j];
        }
    }
    cout<<"the given matrix is \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
           cout<<arr[i][j]<<" ";
           if(i==j){
               sum=sum+arr[i][j];
           }
           
        }
        cout<<endl;
    }
    cout<<"The sum of diagonal element is "<<sum;
    return 0;

}