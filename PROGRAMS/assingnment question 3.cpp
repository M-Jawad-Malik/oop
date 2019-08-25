#include<iostream>
using namespace std;
void sum(int a,int b)
{
	int sum;
	sum=a+b;
	cout<<"SUM OF ENTERED NUMBER IS: "<<sum;
}
int main()
{
	int x,y;
	cout<<"ENTER 1ST NUMBER : ";
	cin>>x;
	cout<<"ENTER 2ND NUMBER : ";
	cin>>y;
	sum(x,y);
	return 0;
}
