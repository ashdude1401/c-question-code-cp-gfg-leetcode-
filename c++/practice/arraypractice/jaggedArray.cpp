#include<iostream>
using namespace std;
int main()
{
    int **arr;
    arr=new int*[3];
    arr[0]=new int[4];
    arr[1]=new int [4];
    arr[2]=new int [4];
    cout<<"Enter  the element of an array"<<endl;
   for (int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];

        }
    }
      for (int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}