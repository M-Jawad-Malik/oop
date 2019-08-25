#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char a[10];
	public:
		String()
		{
			a[0]='\0';
			
		}
		void in()
		{
			cout<"string 1: ";
			gets(a);
			
		}
		void show()
		{
			cout<<"String: "<<a<<endl;
		}
		String operator +(String s)
		{
			String n;
			strcpy(n.a,a);
			strcat(n.a,s.a);
			return n;
			
		}
};
int main()
{
String a,b,c;
a.in();
b.in();
c=a+b;
a.show();
b.show();
c.show();
return 0;	
}
