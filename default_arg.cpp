#include<iostream>
using namespace std;
int sum(int x)
{
	return x;
}
int sum(int x,int y)
{
return x+y;
}
int sum(int x,int y,int z)
{
	return x+y+z;
}
int main()
{
	cout<<"sum x="<<sum(10)<<endl;

	cout<<"sum x,y="<<sum(10,20)<<endl;
	cout<<"sum x,y,z="<<sum(10,20,30)<<endl;
}
