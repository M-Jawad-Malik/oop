#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
		A()
		{
			a=10;
		}
	friend void add(A,B);
};
class B
{
	int b;
	public:
		B()
		{
			b=20;
		}
		friend void add(A,B);
};
void add(A m,B n)
{
	cout<<"Object value of A = "<<m.a<<endl;
	cout<<"Object value of B = "<<n.b<<endl;
	cout<<"sum = "<<m.a+n.b<<endl;
	
}
int main()
{
	A a;
	B b;
	add(a,b);
	return 0;
}
