#include<iostream>
using namespace std;
class Result
{
	int a[3];
	public:
		void in()
		{
		for(int i=0;i<3;i++)
		{
			cout<<"Enter value "<<i+1<<"= ";
			cin>>a[i];
		}
		}
		void out()
		{
			int sum=0;
             float avg; 
			for(int i=0;i<3;i++)
			{
			sum=sum+a[i];	
			}
			avg=sum/3;
			cout<<"average = "<<avg<<endl;
		}
};
class Student:public Result
{
	int roll;
	string name;
	Result r;
	public:
		void in()
		{
			cout<<"Enter roll no of student : ";
			cin>>roll;
			cout<<"Enter name of student : ";
			cin>>name;
			r.in();
			
		}
		void out()
		{
			cout<<"Name of student "<<name<<endl;
			cout<<"Roll no of student "<<roll<<endl;
			r.out();
		}
};
int main()
{
	Student S;
	S.in();
	S.out();
	return 0;
}
