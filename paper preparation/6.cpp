#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int;
	cout<<"enter in value : ";
	cin>>*ptr;
	cout<<"you enter ptr: "<<*ptr<<endl;
	cout<<"it is stored at: "<<ptr<<endl;
	return 0;
}
