#include<iostream>
using namespace std;
class Simple
{protected:
float  a,b;
public:
	Simple()
	{
		a=b=0;
	}
	void in()
	{
		cout<<"Enter a: ";
		cin>>a;
		cout<<"Enter b: ";
		cin>>b;
		
	}
	void add()
	{
		cout<<"Sum = "<<a+b<<endl;
	}
	void sub()
	{
		cout<<"Subtraction = "<<a-b<<endl;
	}
	void mul()
	{
		cout<<"Multiplication = "<<a*b<<endl;
	}
	void divide()
	{
		cout<<"Division = "<<a/b<<endl;
	}
	
	
};
class Complex:public Simple 
{
	public:
	Complex():Simple()
	{
	}
	void add()
	{
		if(a<=0||b<=0)
		{
			cout<<"Invalid values: ";
			Simple::in();
		}
		else 
		Simple::add();
	}
	void sub()
	{
	if(a<=0||b<=0)
		{
			cout<<"Invalid values: ";
			Simple::in();
		}
		else 
		Simple::sub();	
	}
	void mul()
	{
	if(a<=0||b<=0)
		{
			cout<<"Invalid values: ";
			Simple::in();
		}
		else 
		Simple::mul();	
	}
	void divide()
	{
	if(a<=0||b<=0)
		{
			cout<<"Invalid values: ";
			Simple::in();
		}
		else 
		Simple::divide();	
	}
		
};
int main()
{
	Complex X;
	X.in();
	X.add();
	X.sub();
	X.mul();
	X.divide();
	return 0;
}
