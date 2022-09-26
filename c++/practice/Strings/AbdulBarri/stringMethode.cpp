#include<iostream>
using namespace std;
int strlength(char str[])
{
    int i;
    for( i=1;str[i]!='\0';i++)
    {
    }
    return i;
}
void toggle(char str[])
{
    for(auto i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]-=32;
        }
        else if(str[i]>=65&&str[i]<=90)
        {
            str[i]+=32;
        }
    }
}
int main()
{
    char str[]="Welcome";
    cout<<strlength(str)<<endl;
    toggle(str);
    cout<<str;

    return 0;
}