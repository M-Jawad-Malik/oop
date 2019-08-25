#include<iostream>
#include<string>
using namespace std;
struct student 
{
	int age,rollno,semester;
	string name;
};
student get()
{
	student s;
	cout<<"ENTER NAME OF STUDENT: ";
	cin>>s.name;
	cout<<"ENTER ROLL NO OF STUDENT: ";
	cin>>s.rollno;
	cout<<"ENTER SEMESTER OF STUDENT: ";
	cin>>s.semester;
	cout<<"ENTER AGE OF STUDENT: ";
	cin>>s.age;
	return s;
}
void display()
{
	student s;
	s=get();

	cout<<"NAME: "<<s.name<<endl;
	cout<<"ROLL NO: "<<s.rollno<<endl;
	cout<<"SEMESTER: "<<s.semester<<endl;
	cout<<"AGE: "<<s.age<<endl;
}
int main()
{

display();
	return 0;
}
