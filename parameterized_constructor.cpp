#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A();
	A(int);
	A(int,int);
	void print();
};
A::A():x(33),y(44){
	cout<<"obj1 with out arg passing"<<endl;
}
A::A(int a, int b):x(a),y(b){
	cout<<"passing 1 arg and passing 2 arg"<<endl;
}	
void A::print(){
	cout<<"x="<<x<<"y="<<y<<endl;
}
int main(){
	A obj3;
	A obj1(11,22);
	obj1.print();
	obj3.print();
}
