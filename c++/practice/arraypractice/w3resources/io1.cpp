#include<iostream>
using namespace std;
int main()
{
   /* bool a=true;
    cout<<a<<"\n";
    cout<<std::boolalpha;
    cout<<a<<"\n";
    cout<<std::noboolalpha;
    cout<<a<<"\n";*/
   /* int a=26 ,b=30;
    cout<<a<<"  "<<b<<"\n";
    cout<<std::hex;
    cout<<a<<"  "<<b<<"\n";
    cout<<std::oct;
    cout<<a<<"  "<<b<<"\n";
    cout<<std::dec;
    cout<<a<<"  "<<b<<"\n";*/
    int a=26;
    cout<<std::showbase;
    cout<<std::oct;
    cout<<a<<"\n";
    cout<<std::hex;
    cout<<std::showpos;
    cout<<a<<"\n";
    cout<<std::uppercase;
    cout<<a<<"\n";

    return 0;
}