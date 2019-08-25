#include<iostream>
using namespace std;
class Computer 
{
	protected:
	int wrdsz,memsz,stgsz,sp;
	public:
		Computer()
		{
			wrdsz=memsz=stgsz=sp=0;
		}
		Computer(int w,int m,int s,int S)
		{
			wrdsz=w;
			memsz=w;
			stgsz=s;
			sp=S;
		}
		void show()
		{
			cout<<"Word size : "<<wrdsz<<endl;
			cout<<"Memory size: "<<memsz<<endl;
			cout<<"Storage size: "<<stgsz<<endl;
			cout<<"Speed: "<<sp<<endl;
		}
		
};
class laptop:public Computer
{
int ln,wd,hg,wg;
public:
	Laptop():Computer()
	{
		ln=wd=hg=wg=0;
	}
	Laptop(int a,int b,int c,int d,int e,int f,int g,int h):Computer(int e,int f,int g,int h) 
	{
		ln=a;
		wd=b;
		hg=c;
		wg=d;
	}
	void show()
		{
			Computer::show();
			cout<<"Length: "<<ln<<endl;
			cout<<"Width: "<<wd<<endl;
			cout<<"Hieght: "<<hg<<endl;
			cout<<"Wieght: "<<wg<<endl;
		}
	
	
};
in main()
{
	Laptop l(1,2,3,4,5,6,7,8);
	l.show();
	return 0;
}
