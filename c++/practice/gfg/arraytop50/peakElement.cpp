#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[100];
  for(int i=0;i<n;i++)
  {
	cin>>arr[i];

  }
  for(int i=0;i<n;i++)
  {
	cout<<arr[i]<<" ";
  }
  cout<<endl;
  int i=0;
  int j=n-1;
  while(i<j)
  {
	while(arr[i]<0)
	{
		i++;
	}
	while(arr[j]>0)
	{
		j--;
	}
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	i++;
	j--;
  }

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "; 
	}
	cout<<endl;
	return 0; 

}