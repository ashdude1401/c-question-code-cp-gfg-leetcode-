#include<iostream>
using namespace std;
int main()
{
   //declaring string in c like character array
   char n1[10]= {'A','S','H','U','\0'};
   char n2[]= {'A','S','H','U','\0'};
   //declaring string like string 
   char n3[]="ASHU";
   //char *n4="ASHU";//warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  // 10 |    char *n4="ASHU";
    //  |             ^~~~~~
    string mySelf="ASHU";
    //str_name.length() for getting the length of the string 
   cout<<n1<<" "<<n2<<" "<<n3<<" "<<n5.length()<<" "<<n5<<endl;
   //We can do +,-,<,> are provided in c++ string
   n5+="TOSH";
   cout<<n5.length()<<" "<<n5<<endl;
   //find("str") is very useful to find the sub in the given string and gives the first index of occurance
   cout<<n5.find("HU")<<" "
   //substr(index,lenth_of_subString) it prints sub string from given index and given length
   <<n5.substr(2,4)<<" "<<n5<<endl;
   string bro="Deepanshu Jha";
   int res=bro.find("Jha");
   if(res==string::npos) cout<<"Not my brother"<<endl;
   else cout<<"Bhai hai mera kiyoki uske name me index "<<res<<" se jha likha hai"<<endl;
   

   return 0;
}