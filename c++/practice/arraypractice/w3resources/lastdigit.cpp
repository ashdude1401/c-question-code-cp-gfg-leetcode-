#include<iostream>
using namespace std;
int main()
{
   int n,lastdigit;
    cout<<"enter a numbers \n";
    cin>>n;
    lastdigit=abs(n)%10;
    cout<<"Last digit of number is"<<" "<<lastdigit;
    return 0;
}