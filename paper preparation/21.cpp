#include<iostream>
using namespace std;
class jawad
{
	string name;
	public:
		void in()
		{
			cout<<"enter name : ";
			cin>>name;
		}
		void out()
		{
			cout<<"Name = "<<name<<endl;
		}
};
int main()
{
	jawad *ptr[5];
	for(int i=0;i<5;i++)
	{
		ptr[i]=new jawad;
	ptr[i]->in();	 
	}
	for(int i=0;i<5;i++)
	{
	

	ptr[i]->out();	 
	}
	return 0;
	
}
