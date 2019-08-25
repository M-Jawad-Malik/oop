#include<iostream>
#include<string>
#include<fstream>
#include<math.h>
using namespace std;
class mainscreensatm
{public:
int option;
static int p; 
int pin;
int pin1,pin2,pin3,pin4,pin5,pin6;
char c;
public:
		void mainscreen2()
  {  
  system("CLS");
  
	cout<<"\n\n\n\n\t\t\t\t\t\t\t**********************************************************************\n";
	cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
	cout<<"\t\t\t\t\t\t\t|                         1-FUND_TRANSFER                            |\n";
	cout<<"\t\t\t\t\t\t\t|                         2-CASH_WITHDRWRAL                          |\n";
	cout<<"\t\t\t\t\t\t\t|                         3-BALANCE_INQUIRY                          |\n";
	cout<<"\t\t\t\t\t\t\t|                         4-UTILITY_BILLS                            |\n";
	cout<<"\t\t\t\t\t\t\t|                         5-EXIT                                     |\n";
	cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
	cout<<"\t\t\t\t\t\t\t**********************************************************************\n";
};
	void maincreen1()
	{
	a:	cout<<"\n\n\n\n\t\t\t\t\t\t\t**********************************************************************\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
	    cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t|                    WELCOME TO LGU BANK                             |\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t|                     LIVE LIKE LEGEND                               |\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t|                   PLEASE ENTER YOUR CARD(ENTER C)                  |\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t|                                                                    |\n";
		cout<<"\t\t\t\t\t\t\t**********************************************************************\n";
		cout<<"\t\t\t\t\t\t\t---------------->   ";
		cin>>c;
		if(c=='C'||c=='c')
		{
			system("CLS");
			
				    cout<<"\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************\n";
b:	    cout<<"\t\t\t\t\t\t\t\t|                                                   |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                     LGU ATM                       |\n";
	    cout<<"\t\t\t\t\t\t\t\t|          PLEASE ENTER YOUR 4_DIGIT PIN CODE       |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                                                   |\n";
	    cout<<"\t\t\t\t\t\t\t\t*****************************************************\n";
		cout<<"\t\t\t\t\t\t\t\t----------------> ";
		cin>>pin;
		p=pin;
		ifstream in;
		in.open("pins.txt");
		in>>pin1>>pin2>>pin3>>pin4>>pin5>>pin6;
		
		in.close();
				
		if(pin1==pin||pin2==pin||pin3==pin||pin4==pin||pin5==pin||pin6==pin)
		{
			if(pin1==pin)
			{system("PAUSE");
			system("CLS");
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************\n";	              
	    cout<<"\t\t\t\t\t\t\t\t|                     Welcome                        |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                  MR.Usama Bhutto                   |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                                                    |\n";
	    cout<<"\t\t\t\t\t\t\t\t*****************************************************\n";
			system("PAUSE");
			system("CLS");}
		else	if(pin2==pin)
			{system("PAUSE");
			system("CLS");
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************\n";	              
	    cout<<"\t\t\t\t\t\t\t\t|                     Welcome                        |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                  MR.Haseeb Nasir                   |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                                                    |\n";
	    cout<<"\t\t\t\t\t\t\t\t*****************************************************\n";
		system("PAUSE");
			system("CLS");	}
		else	if(pin3==pin)
			{system("PAUSE");
			system("CLS");
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************\n";	              
	    cout<<"\t\t\t\t\t\t\t\t|                     Welcome                        |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                  MR.Haseeb Abbas                   |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                                                    |\n";
	    cout<<"\t\t\t\t\t\t\t\t*****************************************************\n";
			system("PAUSE");
			system("CLS");}
		else	if(pin4==pin)
			{system("PAUSE");
			system("CLS");
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************\n";	              
	    cout<<"\t\t\t\t\t\t\t\t|                     Welcome                        |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                  MR.Muhammad Ahmad                   |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                                                    |\n";
	    cout<<"\t\t\t\t\t\t\t\t*****************************************************\n";
			system("PAUSE");
			system("CLS");}
		else	if(pin5==pin)
			{system("PAUSE");
			system("CLS");
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************\n";	              
	    cout<<"\t\t\t\t\t\t\t\t|                     Welcome                        |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                  MR.Awais khaliq                   |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                                                    |\n";
	    cout<<"\t\t\t\t\t\t\t\t*****************************************************\n";
			system("PAUSE");
			system("CLS");}
		else	if(pin6==pin)
			{system("PAUSE");
			system("CLS");
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************\n";	              
	    cout<<"\t\t\t\t\t\t\t\t|                     Welcome                        |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                  MR.Beitullah                      |\n";
	    cout<<"\t\t\t\t\t\t\t\t|                                                    |\n";
	    cout<<"\t\t\t\t\t\t\t\t*****************************************************\n";
			system("PAUSE");
			system("CLS");}
			mainscreen2();
			
				}
		else 
		{   system("CLS");
		     cout<<"\n\n\n\n\t\t\t\t\t\t\t\t*****************************************************\n";
		     cout<<"\t\t\t\t\t\t\t\t|             WRONG PIN ENTER AGAIN!                |\n";
		     goto  b;   
			
						}				
		}
		else 
	{
		system("CLS");
		goto a;
	}
		
	}};
	
int mainscreensatm::p=0;
class Fundtransfer
{
int cash,accountno,balance[7];
public:
void AC()
{
system("PAUSE");
system("CLS");
		cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t*Enter account no of reciever *\n";
		cout<<"\t\t\t\t\t\t\t*********************\n";
		cin>>accountno;

	cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t*Enter Amount to transfer *\n";
		cout<<"\t\t\t\t\t\t\t*********************\n";
a:		cin>>cash;
		
	ifstream in;
		in.open("balance.txt");
		for(int i=0;i<6;i++)
		{
			in>>balance[i];
		}
		
		in.close();
			if(mainscreensatm::p==136)//account of sender
	{
		if(cash>balance[0])
		{
			cout<<"Insufficient Balance \n";
			cout<<"Enter Cash Within Your Balance ";
			goto a;
		}
	}
   else if(mainscreensatm::p==137)
	{
		if(cash>balance[1])
		{
			cout<<"Insufficient Balance \n";
			cout<<"Enter Cash Within Your Balance ";
			goto a;
		}
	}
	else if(mainscreensatm::p==153)
	{
	if(cash>balance[2])
		{
			cout<<"Insufficient Balance \n";
			cout<<"Enter Cash Within Your Balance ";
			goto a;
		}
	}
	else if(mainscreensatm::p==158)
	{
		if(cash>balance[3])
		{
			cout<<"Insufficient Balance \n";
			cout<<"Enter Cash Within Your Balance ";
			goto a;
		}
	}
	else if(mainscreensatm::p==152)
	{
		if(cash>balance[4])
		{
			cout<<"Insufficient Balance \n";
			cout<<"Enter Cash Within Your Balance ";
			goto a;
		}
	}
	else if(mainscreensatm::p==162)
	{
		if(cash>balance[5])
		{
			cout<<"Insufficient Balance \n";
			cout<<"Enter Cash Within Your Balance ";
			goto a;
		}
	}
			if(accountno==136)
	{
		balance[0]=balance[0]+cash;
	}
   else if(accountno==137)
	{
		balance[1]=balance[1]+cash;
	}
	else if(accountno==153)
	{
		balance[2]=balance[2]+cash;
	}
	else if(accountno==158)
	{
		balance[3]=balance[3]+cash;
	}
	else if(accountno==152)
	{
		balance[4]=balance[4]+cash;
	}
	else if(accountno==162)
	{
		balance[5]=balance[5]+cash;
	}
		
			if(mainscreensatm::p==136)//account of sender
	{
		balance[0]=balance[0]-cash;
	}
   else if(mainscreensatm::p==137)
	{
		balance[1]=balance[1]-cash;
	}
	else if(mainscreensatm::p==153)
	{
		balance[2]=balance[2]-cash;
	}
	else if(mainscreensatm::p==158)
	{
		balance[3]=balance[3]-cash;
	}
	else if(mainscreensatm::p==152)
	{
		balance[4]=balance[4]-cash;
	}
	else if(mainscreensatm::p==162)
	{
		balance[5]=balance[5]-cash;
	}
	ofstream op;
		op.open("balance.txt");
		for(int i=0;i<6;i++)
		{
			op<<balance[i]<<endl;
		}
		op.close();
	
	cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t* Amount transfer successfully *\n";
		cout<<"\n\n\n\n\t\t\t\t\t\t\t*********************\n";
	
		}		
	
	
};
class Cashwithdraw
{
 int amount,balance[7];
 public:
 	void cashbahir()
 	{
 		system("PAUSE");
        	system("CLS");
        	system("color FD");
 		
	cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t*  Enter Amount  *\n";
		cout<<"\t\t\t\t\t\t\t*********************\n";
		cin>>amount;
	ifstream in;
		in.open("balance.txt");
		for(int i=0;i<6;i++)
		{
			in>>balance[i];
		}
		in.close();
			if(mainscreensatm::p==136)
	{
		balance[0]=balance[0]-amount;
	}
   else if(mainscreensatm::p==137)
	{
		balance[1]=balance[1]-amount;
	}
	else if(mainscreensatm::p==153)
	{
		balance[2]=balance[2]-amount;
	}
	else if(mainscreensatm::p==158)
	{
		balance[3]=balance[3]-amount;
	}
	else if(mainscreensatm::p==152)
	{
		balance[4]=balance[4]-amount;
	}
	else if(mainscreensatm::p==162)
	{
		balance[5]=balance[5]-amount;
	}
	ofstream op;
		op.open("balance.txt");
		for(int i=0;i<6;i++)
		{
			op<<balance[i]<<endl;
		}
		op.close();
	
	cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t* Transaction compeleted successfully *\n";
		cout<<"\n\n\n\n\t\t\t\t\t\t\t*********************\n";
	
 		
	 }
};
class balanceinquiry:public mainscreensatm
{
 string balance[6];
 public:
 	void show()
 	{system("PAUSE");
	 system("CLS");
     
 	ifstream in;
		in.open("balance.txt");
		for(int i=0;i<6;i++)
		{
			in>>balance[i];
		}
		
		in.close();
	if(mainscreensatm::p==136)
	{
		cout<<"BALANCE = "<<balance[0]<<endl;
		
	}
   else if(mainscreensatm::p==137)
	{
		cout<<"BALANCE = "<<balance[1]<<endl;
	}
	else if(mainscreensatm::p==153)
	{
		cout<<"BALANCE = "<<balance[2]<<endl;
	}
	else if(mainscreensatm::p==158)
	{
		cout<<"BALANCE = "<<balance[3]<<endl;
	}
	else if(mainscreensatm::p==152)
	{
		cout<<"BALANCE = "<<balance[4]<<endl;
	}
	else if(mainscreensatm::p==162)
	{
		cout<<"BALANCE = "<<balance[5]<<endl;
	}
	
}

};
	
class utilitybills
{
	int amount,balance[7],billno,day,month,year,fine;
	public:
			void cashandar()
 	{
 		system("PAUSE");
        	system("CLS");
    cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t*  Enter Bill no  *\n";
		cout<<"\t\t\t\t\t\t\t*********************\n";
		cin>>billno;    	
 		
	cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t*  Enter Amount  *\n";
		cout<<"\t\t\t\t\t\t\t*********************\n";
		cin>>amount;
		cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t*  Enter Today date  *\n";
		cout<<"\t\t\t\t\t\t\t*********************\n";
		cout<<"\t\t\t\t\t\t\tDay : ";
		cin>>day;
		cout<<"\t\t\t\t\t\t\tmonth : ";
		cin>>month;
		cout<<"\t\t\t\t\t\t\tYear : ";
		cin>>year;
		if(day<=31&&day>26)
		{
			cout<<"\t\t\t\t\t\t\tNo Extra fine \n";
			
		}
		else if(day<26&&day>=1)
		{
			fine=day*200;
		}
		cout<<"\t\t\t\t\t\t\tFine is "<<fine<<"\n";
		amount=amount+fine;
	ifstream in;
		in.open("balance.txt");
		for(int i=0;i<6;i++)
		{
			in>>balance[i];
		}
		in.close();
			if(mainscreensatm::p==136)
	{
		balance[0]=balance[0]-amount;
	}
   else if(mainscreensatm::p==137)
	{
		balance[1]=balance[1]-amount;
	}
	else if(mainscreensatm::p==153)
	{
		balance[2]=balance[2]-amount;
	}
	else if(mainscreensatm::p==158)
	{
		balance[3]=balance[3]-amount;
	}
	else if(mainscreensatm::p==152)
	{
		balance[4]=balance[4]-amount;
	}
	else if(mainscreensatm::p==162)
	{
		balance[5]=balance[5]-amount;
	}
	ofstream op;
		op.open("balance.txt");
		for(int i=0;i<6;i++)
		{
			op<<balance[i]<<endl;
		}
		op.close();
	
	cout<<"\n\n\n\n\t\t\t\t\t\t\t************************\n";
        cout<<"\t\t\t\t\t\t\t* Transaction compeleted successfully *\n";
		cout<<"\n\n\n\n\t\t\t\t\t\t\t*********************\n";
	
 		
	 }
	 
};
void return1()
{
	 
	cout<<"\t\t\t\tTake your Card \n";
}
int main()
{    system("color F9");
	int options;

	mainscreensatm m;
		balanceinquiry bln;
a:	m.maincreen1();
	cin>>options;
	Fundtransfer f;
	Cashwithdraw c;
	utilitybills bill;
	
	switch(options)
	{
	case 1:
	{
			f.AC();
	system("PAUSE");
	system("CLS");
	goto a;
	break;
	
	}
	case 2:
	{
		   c.cashbahir();
			system("PAUSE");
        	system("CLS");
        	goto a;
	break;
        	     
	}
	case 3:
	{
		bln.show();
			system("PAUSE");
        	system("CLS");
        	goto a;
	break;
        
	}
	case 4:
		{
			bill.cashandar();
			system("PAUSE");
        	system("CLS");
        	goto a;
	break;
        	
		}
	case 5:
	{
		return1();
		break;
		}	
}
	
	
}
