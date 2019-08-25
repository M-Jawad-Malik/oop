#include<iostream>
using namespace std;
struct student 
{
	int roll,sem;
	char name[10];
};
void in(student *m)
{
cout<<"enter roll no of student : ";
cin>>m->roll;
cout<<"enter semester of student : ";
cin>>m->sem;
cout<<"enter name of student : ";
cin>>m->name;

}
void out(student *n)
{
	cout<<"name of student "<<n->name<<endl;
	cout<<"roll no of student : "<<n->roll<<endl;
	cout<<"semester of student : "<<n->sem<<endl;
	
}
int main()
{
	student *ptr,std;
	ptr=&std;
	in(ptr);
	out(ptr);
	return 0;
}

