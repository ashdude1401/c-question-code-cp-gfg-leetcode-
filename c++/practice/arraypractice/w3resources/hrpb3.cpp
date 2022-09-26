#include <iostream>
#include <cstdio>
using namespace std;

int main()
 { 
     int a,b,i,k;
     cin>>a>>b;
     for(i=a;i<=b;i++)
     {
         if(i==1)
         {
             cout<<"one \n";
             continue;
         }
         if(i==2)
         {
             cout<<"two \n";
             continue;
         }
          if(i==3)
         {
             cout<<"three \n";
             continue;
         }
         if(i==4)
         {
             cout<<"four \n";
             continue;
         }
         if(i==5)
         {
             cout<<"five \n";
             continue;
         }
         if(i==6)
         {
             cout<<"six \n";
             continue;
         }
          if(i==7)
         {
             cout<<"seven \n";
             continue;
         }
         if(i==8)
         {
             cout<<"eight \n";
             continue;
         }
         if(i==9)
         {
             cout<<"nine \n";
             continue;
         }
         
         for(k=10;k<=b;k++)
         {if(k%2==0)
         cout<<"even \n";
         else
         cout<<"odd \n";
             
         }
         break;
         
     }

    return 0;
}