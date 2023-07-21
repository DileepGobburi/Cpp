/* using member function: return type class name :: operator op(arg,...);
 * uing friend function : friend return-type operator op(arg,...);
 * it is facility of giving special meaning to a operator with out changing the existing meaning is referred as operator loading
 * operator not only works for pre-defined data-types but also works for usedefined data-types is called as operator overlading
 */
 
//operator overloading of + 
#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}
	friend A operator + (const A&,A&);
	void print();
};
A operator + (const A &ob1, A &ob2){
	cout<<"binary + operator"<<endl;
	A res;
	res.x=ob1.x+ob2.x;
	res.y=ob1.y+ob2.y;
	return res;
}
void A::print(){
	cout<<"x="<<x<<"y="<<y<<endl;
}

int main()
{
	A obj1(10,20),obj2(11,22),obj3,obj4;
	obj3=obj1+obj2;//obj3=operator+(obj1,obj2); //obj3=temp;
        obj4=obj1+obj2+obj3;
	cout<<"obj1 data"<<endl;
	obj1.print();
	cout<<"obj2 data"<<endl;
	obj2.print();
	cout<<"obj3 data"<<endl;
	obj3.print();
	cout<<"obj4 data"<<endl;
	obj4.print();
}
//obj4 = obj1+obj2+obj3
//     =operator+(obj1,obj2)+obj3;
//     =temp+obj3;
//     =operator+(temp,obj3);
//     =temp
