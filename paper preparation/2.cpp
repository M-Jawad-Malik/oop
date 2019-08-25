#include<iostream>
using namespace std;
int main()
{
	char str[]="hello jawad";
	char *ptr,ch,n;
	cout<<"Enter char to search : ";
	cin>>ch;
	ptr=str;
	while(*ptr++!='0')
	{
	if(*ptr==ch)
	{
		n='y';
	}}
	if(n=='y')
	{
		cout<<"found successfully";
	}
	else 
	{
		cout<<"not found ";
	}
	return 0;
}
