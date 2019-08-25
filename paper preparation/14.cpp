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
		A(int m)
		{
			a=m;
		}
		void show()
		{
			cout<<"a = "<<a<<endl;
			
		}
};
class B:public A
{
	char c;
	public:
		B():A()
		{
			c='x';}
		B(int m,char s):A(m)
		{
			c=s;
			}	
		void show()
		{
			A::show();
			cout<<"b= "<<c<<endl;
			}	
		
};
int main()
{
	B b(5,'@');
	b.show();
	return 0;
}
