#include<iostream>
using namespace std;
class base
{
  public:
  void fun1()
  {
    cout<<"fun1()"<<endl;

  }
  void fun2()
  {
    cout<<"fun2()"<<endl;
    
  }
  void fun3()
  {
    cout<<"fun3()"<<endl;
    
  }
};
class derived:public base 
{
   void fun4()
  {
    cout<<"fun4()"<<endl;
    
  }
  void fun5()
  {
    cout<<"fun5()"<<endl;
    
  }

};
int main()
{   derived  *p=new base();
    p->fun1();
   
    return 0;
    
}