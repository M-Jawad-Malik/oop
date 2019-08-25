#include<iostream>
using namespace std;
int fab(int a);
int main()
{
	int n,a;
	cout<<"ENTER THE NUMBER: ";
	cin>>n;
	for(a=0;a<n;a++)
	{
		cout<<fab(a)<<"     ";
		
	}
	return 0;
}
int fab(int a)
{
	if(a==0)
	{
		return 0;
	}
	else if(a==1)
	{
		return 1;
	}
	else 
	return (fab(a-1)+fab(a-2));
}

