#include<iostream>
#include<conio.h>
using namespace std;
int n;
string Id[20],Name[20],Age[20],Gender[20],BloodGroup[20],Address[20],Phone_no[20],Salary[20];
string arr[20];
int main()
{
	system("cls");
	system("color 1");
void insert();
void show();
void deletes();
void edit();
int choice;

cho:
	cout<<"\t\t\t                          STAFF                            "<<endl;
	cout<<"\n\t\t\t***************************************************************"<<endl;
	cout<<"\t\t\t							                     "<<endl;
	cout<<"\t\t\t            Press 1 for Insert Data of Staff                "<<endl;
	cout<<"\t\t\t            Press 2 for Delete Data of Staff              "<<endl;
	cout<<"\t\t\t            Press 3 for Edit Data of Staff	            "<<endl;
	cout<<"\t\t\t            Press 4 for Show All Staff	                     "<<endl;
	cout<<"\t\t\t            Press 5 End Program			                     "<<endl;
	cout<<"\t\t\t						                                         "<<endl;
	cout<<"\t\t\t***************************************************************"<<endl;
cout<<"\n Enter your choice: \n -> ";
cin>>choice;

	switch(choice)
	
	  {
	  	system("color 9");
	   case 1:
	    	insert();
			cout<<"Inserted";
			goto cho;
		break;
	
	   case 2:
			deletes();
			goto cho;
	    break;
		
		case 3:
	       edit();
			goto cho;
	    break;
	  
	   case 4:
	        show();
			goto cho;
	   break;
		
		case 5:
			break;	
	}

	
}

void insert(){
	system("cls");
	system("color C");
	cout<<"\nHow many Staff Data Entered:\n -> ";
	cin>>n;
	
	for(int i=0; i<n ;i++)
	{
		cout<<"\nEnter the ID of Staff "<<i+1;
		cout<<"\nEnter the Staff ID:\n -> ";
		cin>>Id[i];
	}
	for(int j=0; j<n; j++)
	{	
		cout<<"\nEnter the Name of Staff "<<j+1;
		cout<<"\nEnter the Staff Name:\n -> ";
		cin>>Name[j];
	}
	for(int p=0;p<n;p++)
	{
		cout<<"\nEnter the Age of Staff"<<p+1;
		cout<<"\nEnter the Staff Age:\n ->";
		cin>>Age[p];
	}
	for(int a=0;a<n;a++)
	{
		cout<<"\nEnter the BloodGroup of Staff "<<a+1;
		cout<<"\nEnter the Staff BloodGroup:\n -> ";
		cin>>BloodGroup[a];
	}
	for(int k=0; k<n; k++)
	{	
		cout<<"\nEnter the Gender of Staff "<<k+1;
		cout<<"\nEnter the Staff Gender:\n -> ";
		cin>>Gender[k];
	}
	for(int l=0; l<n; l++)
	{
		cout<<"\nEnter the Address of Staff "<<l+1;
		cout<<"\nEnter the Staff Address:\n -> ";
		cin>>Address[l];
	}
	for(int m=0; m<n; m++)
	{	
		cout<<"\nEnter the Phone_no of Staff "<<m+1;
		cout<<"\nEnter the Staff Phone.no:\n -> ";
		cin>>Phone_no[m];
	}
	for(int o=0; o<n; o++)
	{	
		cout<<"\nEnter the Salary of Staff "<<o+1;
		cout<<"\nEnter the Staff Salary:\n -> ";
		cin>>Salary[o];
	}
}
void deletes(){
	system("color 9");
	system("cls");
	int ind,rev;
	
	cout<<"\n Enter the ID which data is Deleted: \n -> ";
	cin>>ind;
	
	rev = ind-1;
	for(int i=rev; i<=n; i++)
	{
		Id[ind-1] = Id[ind];
		Name[ind-1] = Name[ind];
		Age[ind-1] =Age[ind];
		Gender[ind-1] = Gender[ind];
		BloodGroup[ind-1] =BloodGroup[ind];
		Address[ind-1] = Address[ind];
		Phone_no[ind-1] = Phone_no[ind];
		Salary[ind-1] = Salary[ind];
	}
	
	cout<<"\n****************************************"<<endl;
	cout<<" < Data will Deleted from Index  "<<ind-1<<" >";
	cout<<"\n****************************************"<<endl;
}

void show(){
	system("cls");
	system("color 3");
	for(int i=0; i<n; i++){
	
		cout<<" ID :          "<<Id[i]<<endl;
		cout<<" Name :        "<<Name[i]<<endl;
		cout<<" Age :         "<<Age[i]<<endl;
		cout<<" Gender :      "<<Gender[i]<<endl;
		cout<<" BloodGroup:   "<<BloodGroup[i]<<endl;
		cout<<" Address :     "<<Address[i]<<endl;
		cout<<" Phone_no :    "<<Phone_no[i]<<endl;
		cout<<" Salary :      "<<Salary[i]<<endl;
	}
}

void edit()
{
	system("cls");
	system("color B");
	int edi;
	
	cout<<"\nEnter the ID which Data is Update: \n -> ";
	cin>>edi;
	
		cout<<"\n****************************************";	
		cout<<"\n****************************************"<<endl;
		cout<<" ID :          "<<Id[edi-1]<<endl;
		cout<<" Name :        "<<Name[edi-1]<<endl;
		cout<<" Age :         "<<Age[edi-1]<<endl;
		cout<<" Gender :      "<<Gender[edi-1]<<endl;
		cout<<" BloodGroup :  "<<BloodGroup[edi-1]<<endl;
		cout<<" Address :     "<<Address[edi-1]<<endl;
		cout<<" Phone_no :    "<<Phone_no[edi-1]<<endl;
		cout<<" Salary :      "<<Salary[edi-1]<<endl;
		cout<<"\n****************************************";	
		cout<<"\n****************************************"<<endl;
		
		cout<<"\nEnter the Name of Staff: \n -> ";
		cin>>Name[edi-1];
		cout<<"\nEnter the Age of Staff: \n ->";
		cin>>Age[edi-1];
		cout<<"\nEnter the Gender of Staff: \n -> ";
		cin>>Gender[edi-1];
		cout<<"\nEnter the BloodGroup of Staff: \n ->";
		cin>>BloodGroup[edi-1];
		cout<<"\nEnter the Address of Staff: \n -> ";
		cin>>Address[edi-1];
		cout<<"\nEnter the Phone_no of Staff: \n -> ";
		cin>>Phone_no[edi-1];
		cout<<"\nEnter the Salary of Staff: \n -> ";
		cin>>Salary[edi-1];
}
