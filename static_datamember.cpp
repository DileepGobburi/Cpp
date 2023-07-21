/*#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
		static int z; //static declaration
		A(int a, int b):x(a),y(b){
			  cout<<"constructor"<<endl;
		  }
		void print(){
			cout<<"x="<<x<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
};
int A::z = 15; //static implemenation or defining
int main(){
	A obj1(10,20);
	cout<<"sizeof(A)="<<sizeof(A)<<endl;
	cout<<"sizeof(obj1)="<<sizeof(obj1)<<endl;
	obj1.print();
}*/

#include<iostream>
using namespace std;
class A{
	public:static int z;
	       A(){
		       cout<<"constructor"<<endl;
		       z=10;
	       }
};
int A::z=15;
int main()
{
	A obj;
	cout<<"obj.z="<<obj.z<<endl;
	cout<<"A::z="<<A::z<<endl;
}
//note:A static data member shoud not be initialized with constructor
//static data member is possible to access in (obj and dot operator || classname :: variable)
