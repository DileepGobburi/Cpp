
//operator overloading of pre incement(++x)
#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	A operator ++();
	void print();
};
A A::operator ++()
{
	A res;
	res.x=++x;
	res.y=++y;
	return res;
}
void A::print(){
	cout<<"x="<<x<<"y="<<y<<endl;
}
int main(){
	A obj1(10,20),obj2;
	obj2=++obj1;//obj2=obj1.operator++()
	cout<<"obj1 data"<<endl;
	obj1.print();
	cout<<"obj2 data"<<endl;
	obj2.print();
}
