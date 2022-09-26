#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n],sum=0,temp=0,arr1[n+1];
    cout<<"enter numbers between 1 to "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    int count=1;
    for(int j=0;j<=n;j++)
    {  
       arr1[j]=count;
       temp=temp+arr1[j];
       count++;
    }
    cout<<"The missing number is "<<(temp-sum);
    return 0;

}