#include<iostream>
using namespace std;
class Test 
{
	int a;
	public:
		void in()
		{
			cout<<"Enter value : ";
			cin>>a;
		}
		void out()
		{
			cout<<"Value = "<<a<<endl;
		}
		
};
int main()
{
	Test *t;
	t=new Test;
	t->in();
	t->out();
	return 0;
}
