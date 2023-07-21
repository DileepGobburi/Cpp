#include<iostream>
#include<string.h>
using namespace std;
class B{
	char *str;
	public:
	B(const char *p)
	{
		str = new char[strlen(p)+1];
		strcpy(str,p);
	}
	B(B &ob){
		str = new char[strlen(ob.str)+1];
		strcpy(str,ob.str);
	}
	void modify()
	{
		str[0]='T';
	}
	void print()
	{
		cout<<"string="<<str<<endl;
	}

};
int main()
{
	B obj1("thundersoft");
	B obj2=obj1;
	obj1.modify();
	obj1.print();
	obj2.print();
}
