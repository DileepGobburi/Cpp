
//implementation of ++post increment operator using friend function
#include<iostream>
using namespace std;

class A{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	friend A operator++(A&,int);
	void print();
};
A operator ++(A &ob1, int)
{
	cout<<"post increment"<<endl;
	A res;
		res.x= ob1.x++;
		res.y=ob1.y++;
}
void A::print(){
	cout<<"x="<<x<<"y="<<y<<endl;
}

int main()
{
	A obj1(10,20), obj2;
	  obj2=obj1++;//operator++(obj1,0);
	cout<<"obj1 data"<<endl;
	obj1.print();
	cout<<"obj2 data"<<endl;
	obj2.print();
}
