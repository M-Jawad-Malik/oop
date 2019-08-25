#include<iostream>
using namespace std;
class add 
{
	int a,b;
	public:
		add()
		{
			a=b=0;
		}
		void in()
		{
			cout<<"enter value of a= ";
			cin>>a;
			cout<<"enter value of b= ";
			cin>>b;
		}
		void out()
		{
			cout<<"value of a: "<<a<<endl;
			cout<<"value of b: "<<b<<endl;
		}
		add operator +(add m)
		{
			add n;
			n.a=a+m.a;
			n.b=b+m.b;
			return n;
		}
};
int main()
{
	add a,b,c;
	a.in();
	b.in();
	c=a+b;
	a.out();
	b.out();
	c.out();
	return 0;
}
