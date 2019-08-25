#include<iostream>
using namespace std;
void largest(int a,int b, int c)
{
	if(a<b&&c<b)
	{
		cout<<"LARGEST OF THREE IS: "<<b;
	}
 else	if(a>b&&a>c)
	{
		cout<<"LARGEST OF THREE IS: "<<a;
	}
	else if(c>a&&c>b)
	{
		cout<<"LARGEST OF THREE IS: "<<c;
	}
}
int main()
{
	int x,y,z;
	cout<<"ENTER 1ST NUMBER: ";
	cin>>x;
	c:
	cout<<"ENTER 2ND NUMBER: ";
	cin>>y;
	if(y==x)
{
cout<<"PLZ AGAIN ";
	goto c;}
	b:
	cout<<"ENTER 3RD NUMBER: ";
	cin>>z;
	if(z==x||z==y)
	{
			cout<<"PLZ AGAIN ";
	goto b;}
	largest(x,y,z);
	return 0;
	
	
}


