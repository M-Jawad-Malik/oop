#include<iostream>
using namespace std;
int main()
{
	char *ptr,ch[10];
	cout<<"Enter String :";
    cin.getline(ch,10);
    ptr=ch;
    cout<<"String : "<<ptr<<endl;
    return 0;
    
}
