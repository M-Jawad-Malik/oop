#include<iostream>
using namespace std;
class count 
{
	int n;
	public:
		count()
		{
			n=0;
			
		}
	count operator ++()
	{
		count a;
		a.n++;
		return a;
		}
		void show()
		{
			cout<<"value of n after increment : "<<n;
			}	
};
int main()
{
	count a,b;
	b=++a;
	a.show();
	b.show();
	return 0;
	
}
