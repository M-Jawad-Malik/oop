#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			a=0;
		}
		void set(int m)
		{
			a=m;
			
		}
		void show()
		{
			cout<<"Value of a = "<<a<<endl;
			
		}
};
class B:public A
{
	int b;
	public:
		B():A()
		{
			b=0;
		}
		void set(int m,int n)
		{
			A::set(m);
			b=n;
		}
		void show()
		{
			A::show();
			cout<<"Value of b = "<<b<<endl;
			
		}
		
};
class C:public B
{
	int c;
	public:
		C():B()
		{
			c=0;
		}
		void set(int m,int n,int o)
		{
			B::set(m,n);
			c=o;
		}
		void show()
		{
			B::show();
			cout<<"Value of c = "<<c<<endl;
			
		}
};
int main()
{
	C c;
	c.set(5,3,4);
	c.show();
	return 0;
}
