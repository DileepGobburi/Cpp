//ex program of new operator usage
#include<iostream>
using namespace std;
int main()
{
 int *p;
 p = new int;
 *p=10;
 cout<<"*p="<<*p<<endl;
 cout<<"p="<<p<<endl;
}
