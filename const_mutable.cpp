#include<iostream>
using namespace std;

class A{

	int x;
	mutable int y;
        public:
	void setdata(int,int);
	void modify() const;
	void print() const;
};
void A::setdata(int a, int b)
{
	x=a,y=b;
}
void A::modify() const
{
//	x=11;//error while access datamember in const member function
	y=15;
}
void A::print() const
{
	cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
	A obj1;
	obj1.setdata(10,20);
	obj1.modify();
        obj1.print();
}
