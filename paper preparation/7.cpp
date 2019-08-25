#include<iostream>
using namespace std;
void in(int *ptr ,int len)
{
	int i;	
	for(i=0;i<len;i++)
	{
		cout<<"enter value "<<i+1<<" = ";
		cin>>*ptr++;
	}
}
int main()
{int len,i;
	cout<<"enter length of string : ";
	cin>>len;
	int *ptr=new int[len];
in(ptr,len);
	for(int j=0;j<len;j++)
	{
		cout<<"value "<<j+1<<" = "<<*ptr++<<endl;
	
	}	delete[] ptr;
	
	
}

