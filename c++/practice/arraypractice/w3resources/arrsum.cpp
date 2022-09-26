#include<iostream>
using namespace std;

int main()
{   int n,i,sum=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{cin>>a[i];
sum=sum+a[i];
}
/*for(i=(n-1);i>=0;i--)
{cout<<a[i]<<endl;
}*/
cout<<"sum "<<sum;

    return 0;
}