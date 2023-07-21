#include<iostream>
using namespace std;
int sum(int x, int y=0,int z=1)
{
	return x+y+z;
}
	int main()
{
cout<<"sum="<<sum(10)<<endl;
cout<<"sum="<<sum(10,20)<<endl;
cout<<"sum="<<sum(10,20,30)<<endl;

}
