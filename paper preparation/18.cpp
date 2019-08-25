#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"A"<<endl;
		}
		
};
class B
{
	public:
		B()
		{
			cout<<"B"<<endl;
		}
		
};
class C:public A,public B
{
	public:
		C():A(),B()
		{
			cout<<"C"<<endl;
		}
		
};
int main()
{
	C c;
	return 0;
}
