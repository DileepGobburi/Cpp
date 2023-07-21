#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A():x(10),y(20)
	{
		cout<<"dynamic constructor with defaut type"<<endl;
	}
        A(int a,int b):x(a),y(b){
		{
			cout<<"parameterized constructor"<<endl;}
	}
	void print(){
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}

};
int main(){
	A *ptr = new A;
	cout<<"printing data"<<endl;
	ptr->print();
	delete ptr;
	ptr = new A(11,22);
	ptr->print();
	delete ptr;
}

