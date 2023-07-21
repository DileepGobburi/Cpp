#include<iostream>
using namespace std;

class A{
	int x,y;
	public:
	A(){
		cout<<"constructor invoked"<<endl;
	}
	void setdata(){
		cin>>x>>y;
	}
	void print(){
		cout<<"x="<<x<<"y="<<y<<endl;
	}
};
int main(){
	A obj1;
	obj1.setdata();
	obj1.print();
}
