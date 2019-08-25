#include<iostream>
using namespace std;
int fab(int x,int y,int n)
{
	int a;
	a=x+y;
	x=y;
	y=a;
	cout<<a<<"----";
	
	
	if(a<n-2)
	{
		
		a=a+fab(x,y,n);
		
	}
}
int main()
{
	int a,b,n;
	cout<<"ENTER NUMBER OF ELEMENTS OF SERIES YOU WANT TO PRINT ";
	cin>>n;
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		cout<<0<<"----";
	}
	else if(n==2)
	{
		cout<<0<<"----"<<1<<"----";
	}
	else if(n>2)
	{
	
cout<<0<<"----"<<1<<"----";
	
	
	fab(0,1,n);
}
	return 0;
}
