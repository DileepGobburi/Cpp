#include<iostream>
using namespace std;
class B{
	int x,y;
	public:
	B():x(10),y(20)
	{
		cout<<"copy constructor"<<endl;
	}
	void print(){
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
};
int main()
{
	B obj1;
	cout<<"obj1 data"<<endl;
	obj1.print();
	B obj2=obj1;
	cout<<"obj2 data"<<endl;
	obj2.print();
}
