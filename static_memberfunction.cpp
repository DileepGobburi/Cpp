#include<iostream>
using namespace std;

class A{
	public :
		int x,y;
		static int z;
		A(int a,int b):x(a),y(b){
			cout<<"constructor"<<endl;
		}
		static void print_static()
		{
			//cout<<"inside static function"<<endl;
			//cout<<"x="<<x<<"y="<<y<<endl;//not possible to access the non static datamembers inside the static function
			cout<<"z="<<z<<endl;
		}
		void print_non_static()
		{
			cout<<"non static function"<<endl;//non sttaic function can access static datamember
			cout<<"x="<<x<<"y="<<y<<endl;
                        cout<<"z="<<z<<endl;
		}
};
int A::z=15;
int main()
{
	A obj1(10,20);
	obj1.print_static();
	obj1.print_non_static();
}
