#include<iostream>
using namespace std;
void fun(int* m,int* n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
	
}
int main()
{
	int a,b;
	cout<<"Enter integer : ";
	cin>>a;
	cout<<"	";
	cin>>b;
	fun(&a,&b);
	cout<<"a= "<<a<<endl<<"b= "<<b;
	return 0;
}
