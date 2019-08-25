#include<iostream>
#include<math.h>
using namespace std;
void l()
{
	cout<<"Enter Length  ";
	
}
void w()
{
	cout<<"enter width ";
}
int window(int a1[],int l1[],int w1[],int n1,int sum1,char x)
{
	cout<<"Is there any window in room (y/n) = ";
	cin>>x;
	cout<<endl<<endl;
	switch(x)
{


	case'y':

    {
	
	 cout<<"Enter no of Windows in room = ";
	cin>>n1;
	cout<<endl<<endl;
    for(int i=1;i<=n1;i++)
	{
		l();
		cout<<"Of Window "<<i<<" = ";
		cin>>l1[i];
		w();
		cout<<"Of Window "<<i<<" = ";
		cin>>w1[i];
		a1[i]=l1[i] * w1[i];
		cout<<"Area of window "<<i<<" = "<<a1[i]<<endl<<endl;
	
	    sum1=sum1+a1[i];
	

		}
		cout<<"TOTAL AREA OF "<<n1<<" windows = ";
		break;
	}
		case'n':
		{
		
		
		break;
		}}
		
		return(sum1);
		cout<<endl<<endl;
}
int ventilation(int a2[],int l2[],int w2[],int n2,int sum2,char y)
{
	cout<<"Is there any ventilation in room (y/n) = ";
	cin>>y;
	cout<<endl<<endl;
	switch(y)
{


	case'y':

    {
	
	 cout<<"Enter no of ventilators in room = ";
	cin>>n2;
		cout<<endl<<endl;
	
	
	for(int i=1;i<=n2;i++)
	{
		l();
		cout<<"Of ventilator "<<i<<" = ";
		cin>>l2[i];
		w();
		cout<<"Of ventilator "<<i<<" = ";
		cin>>w2[i];
		a2[i]=l2[i] * w2[i];
		cout<<"Area of ventilator "<<i<<" = "<<a2[i]<<endl<<endl;
	
	    sum2=sum2+a2[i];
		

		}
		cout<<"TOTAL AREA OF "<<n2<<" ventilator = ";
	
		break;
	}
		case'n':
		{break;
		}}
		return(sum2);
		cout<<endl<<endl;
		
}
int door(int a3[],int l3[],int w3[],int n3,int sum3,char z)
{
	
	 cout<<"Enter no of Door in room = ";
	cin>>n3;
	cout<<endl<<endl;
	
	
	for(int i=1;i<=n3;i++)
	{
		l();
		cout<<"Of Door "<<i<<" = ";
		cin>>l3[i];
		w();
		cout<<"Of Door "<<i<<" = ";
		cin>>w3[i];
		a3[i]=l3[i] * w3[i];
		cout<<"Area of Door "<<i<<" = "<<a3[i]<<endl<<endl;
	
	    sum3=sum3+a3[i];
	

		}
			cout<<"TOTAL AREA OF "<<n3<<" DOORS = ";
	
		
	
		return(sum3);
}

int main()
{int n1,n2;
int sum1=0,sum2=0;
char x,y;
int A,A1,L,W,AREA;	
int a1[n1],a2[n2],l1[n1],l2[n2],w1[n1],w2[n2];
int n3;
int a3[n3],l3[n3],w3[n3];
int sumw,sumv,sumd;

int sum3=0;
char z;
cout<<"                                         PROGRAM FOR AREA OF ROOM                                "<<endl<<endl;
cout<<"                             Prepared by:"<<endl;
cout<<"                                         >>Muhammad Jawad"<<endl;
l();
cout<<"OF ROOM In Inches = ";
cin>>L;
w();
cout<<"OF ROOM In Inches = ";
cin>>W;
A=L*W;
cout<<"TOTAL AREA OF ROOM = "<<A<<endl<<endl;



sumw=window(a1,l1,w1,n1,sum1,x);
cout<<sumw<<endl;
sumv=ventilation(a2,l2,w2,n2,sum2,y);
cout<<sumv<<endl;
sumd=door(a3,l3,w3,n3,sum3,z);
cout<<sumd<<endl<<endl;
A1=sumw+sumv+sumd;
cout<<"Sum Of Area's of all windows,ventilations and Doors = "<<A1<<endl<<endl;
AREA=A-A1;
cout<<"Area of Room excluding Area of all Windows,Ventilations and Doors =  "<<AREA;

return 0;
}
