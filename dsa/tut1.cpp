#include<stdio.h>
#include<iostream>
using namespace std;
struct rect
{
    int length ;
    int breadth;
    char x;
}r2,r3,r4 ;//in this way also you can declare a global variable of type rect;
int main()
{
    struct rect r1;
    r1.length=10;
    r1.breadth=20;
    cout<<sizeof(r1);//it is showing the size of struct as 12 instead of 9,because of padding i.e taking some extra memory for processing which it will discard later ;

    return 0;

}