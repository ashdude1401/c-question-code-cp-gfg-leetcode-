#include<iostream>
#include<cmath>
using namespace std;
int findP(int num)
{
    int temp=num,i=2,mul=1,res=0;
    if(temp<=9)
    return temp+10;
    else{
        while(temp!=1&&i<=sqrt(num))
        {
            if(temp%i==0)
            {
                temp=temp/i;
                if(mul*i<=9)
                {
                    mul=mul*i;
                }
                else
                {
                    res=res*10+mul;
                    mul=i;               
                 }
            }
            else
            i++;
        }
        if(i>sqrt(num))
        return -1;
        else return res*10+mul;
    }

}
int main()
{
    int num,p;
    cout<<"Enter the number"<<endl;
    cin>>num;
    p=findP(num);
    cout<<p;
    return 0;
}
