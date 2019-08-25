#include<iostream>
using namespace std;
class shape
{
	private:
	int l,w;
	public:
	Shape()
	{
		l=10;
		w=20;
		}	
	shape(int a,int b)
	{
		l=a;
		w=b;
		
		}	
	int arearec()
	{
		return l*w;
		}	
	int areatri()
	{
		return (1/2)*l*w;
		}	
	int areacir()
	{
		return 3.14*l*w;
		}	
};
int main()
{ 
int a,b,c,d,e;
shape f,shape(a,b);

	cout<<"ENTER BASE OF TRIANGLE: ";
	cin>>a;
	cout<<"ENTER ALTITUDE OF TRIANGLE: ";
	cin>>b;
	cout<<"ENTER LENGTH OF RECTANGLE: ";
	cin>>c;
	cout<<"ENTER WIDTH OF RECTANGLE: ";
	cin>>d;
	cout<<"ENTER RADIUS OF CIRCLE: ";
	cin>>e;
	cout<<endl<<endl;
	cout<<"AREA OF TRIANGLE: ";
    f.areatri();
    cout<<endl;
    cout<<"AREA OF RECTANGLE: ";
    f.arearec();
    cout<<endl;
    cout<<"AREA OF CIRCLE: ";
    f.areacir();
    cout<<endl;
	}
