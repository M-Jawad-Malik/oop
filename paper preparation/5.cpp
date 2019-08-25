#include<iostream>
using namespace std;
struct time
{
	int hr,min,sec;
	
};
void fun(time *m,int *n)
{
	m->hr=0;
	m->min=0;
	while(*n>=60)
	{
		m->min=m->min+1;
		*n=*n-60;
	}
	while(m->min>=60)
	{
		m->hr=m->hr+1;
		m->min=m->min-60;
	}

	
}
int main()
{
	time *ptr,tm;
	ptr=&tm;
	cout<<"enter seconds: ";
	cin>>ptr->sec;
	fun(ptr,&ptr->sec);
	cout<<"Time : "<<ptr->hr<<"/"<<ptr->min<<"/"<<ptr->sec<<endl;
	return 0;
	
}
