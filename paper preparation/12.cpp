#include<iostream>
using namespace std;
class yahoo
{
static int n;
public:
	yahoo()
	{
		n++;
	}
	void show()
	{
		cout<<"object created : "<<n;
	}
	
	
};
int yahoo::n=0;
int main()
{
	yahoo x,y;
	x.show();
	y.show();
	yahoo z;
	z.show();
	
	return 0;
}

