#include<iostream>
using namespace std;
int main()
{
  int n,temp;
  cout<<" enter the number of inputs\n ";
  cin>>n;
  int arr[n];
  cout<<"enter the numbers\n";
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(arr[i]>arr[j])
          {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
  }
  cout<<"assending order";
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
  return 0;
}