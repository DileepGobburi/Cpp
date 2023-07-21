// dynamic memory allocation for array
#include<iostream>
using namespace std;
int main()
{
 int *p,i;
 p = new int[5];
if(p==NULL)
{
	cout<<"dma is not happnened "<<endl;
		return 0;
}
cout<<" enter the elements in to array"<<endl;
for(i=0;i<5;i++)
cin>>p[i];
for(i=0;i<5;i++)
cout<<"p["<<i<<"]="<<p[i]<<endl;
delete []p;
}

