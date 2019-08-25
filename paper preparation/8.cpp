#include<iostream>
using namespace std;
class count 
{
	int a;
	public:
	count()
	{
		a=0;
		}	
	void operator ++()
	{
		a++;
		}	
void show()
{
	cout<<"value of a = "<<a;
		}		
};
int main()
{
	count c,b;
	++c;
	++c;
	c.show();

	return 0;
}

