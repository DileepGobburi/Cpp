#include<iostream>
using namespace std;

void fun(int x)
{
	cout<<"x="<<x<<endl;
}
void fun(int x, int y)
{
	cout<<"x="<<x<<"y="<<y<<endl;
}
int  main()
{
	fun(10,20);
	fun(10);
};
