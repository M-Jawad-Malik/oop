#include<iostream>
using namespace std;
bool vowel(char a)
{
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		return true;
	}
	else 
	{
	return false;}
}
int main()
{
	char a;
	cout<<"ENTER CHARACTER: ";
	cin>>a;
	if(vowel(a))
	{
		cout<<"ENTERED CHARACTER IS VOWEL ";}
	else
	{
		cout<<"ENTER CHARACTER IS NOT VOWEL ";
	}
	return 0;
	}
