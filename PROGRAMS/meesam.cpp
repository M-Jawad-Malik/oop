#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{//giving option to the user for their choice

							int	student_id,student_id2,student_id3,student_id4;
	                        string name[500];
                            string address[500];
                            string contact[500];
                            string age[500];
                            string sex[500];
                            string blood_gp[500];
                            string Class[500];
		

char i;
string question;
string nm;
  for(int i=0;i<=500;i++)
  {
  
		
			name[i]="NO_RECORD";
			address[i]="NO_RECORD";
            contact[i]="NO_RECORD";
            age[i]="NO_RECORD";
            sex[i]="NO_RECORD";
            blood_gp[i]="NO_RECORD";
            Class[i]="NO_RECORD";
}b:
	
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  STUDENT MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Student Record                        |\n";
cout<<"\t\t\t\t\t\t|             2  >> Update Student Record                         |\n";
cout<<"\t\t\t\t\t\t|             3  >> Search Record By Any Field                    |\n";
cout<<"\t\t\t\t\t\t|             4  >> Delete Record By Any field                    |\n";
cout<<"\t\t\t\t\t\t|             5  >> Display All Record                            |\n";
cout<<"\t\t\t\t\t\t|             6  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
 		system("PAUSE");
      	system("CLS");
	if(i=='1')
{
	
                         
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  STUDENT MANAGEMENT SYSTEM \n\n";	
             
    ofstream a;
	a.open("JAWAD.txt");

    
             cout<<"ENTER STUDENT ID = ";
            cin>>student_id;
			
            cout<<"_________________________________________________________________________________student_file__________________________________________________________________";
            cout<<endl;
           
			cout<<"                   Name : ";
            cin>>name[student_id];
            cout<<"                   Address : ";
            cin>>address[student_id];
            cout<<"                   Contact Number : ";
            cin>>contact[student_id];
            cout<<"                   Age : ";
            cin>>age[student_id];
            cout<<"                   Sex : ";
            cin>>sex[student_id];
            cout<<"                   Blood Group : ";
            cin>>blood_gp[student_id];
            cout<<"                   Class : ";
            cin>>Class[student_id];
            for(int i=1;i<=500;i++)
            {
			
			a<<i<<endl<<name[i]<<endl<<address[i]<<endl<<contact[i]<<endl<<age[i]<<endl<<sex[i]<<endl<<blood_gp[i]<<endl<<Class[i]<<endl<<endl<<endl;}
    a.close();
            
            
        cout<<"\nInformation Saved Successfully\n";
              system("pause");
  system("cls");
  goto b;
            }
            else if(i=='2')
            {
            	                
                                                
            cout<<"ENTER STUDENT ID TO UPDATE  = ";
            cin>>student_id2;
            cout<<"_________________________________________________________________________________STUDENT_file__________________________________________________________________";
            cout<<endl;
			cout<<"                   Name : "<<name[student_id2]<<endl<<endl;
            cout<<"                   Address : "<<address[student_id2]<<endl;
            cout<<"                   Contact Number : "<<contact[student_id2]<<endl;
            cout<<"                   Age : "<<age[student_id2]<<endl;
            cout<<"                   Sex : "<<sex[student_id2]<<endl;
            cout<<"                   Blood Group : "<<blood_gp[student_id2]<<endl;
            cout<<"                   CLASS : "<<Class[student_id2]<<endl;
            cout<<"DO YOU WANT TO CHANGE STUDENT RECORD:(YES/NO) ";
			cin>>question;
			if(question=="YES")
			{
				       
            cout<<"                   Name : ";
            cin>>name[student_id2];
            cout<<"                   Address : ";
            cin>>address[student_id2];
            cout<<"                   Contact Number : ";
            cin>>contact[student_id2];
            cout<<"                   Age : ";
            cin>>age[student_id2];
            cout<<"                   Sex : ";
            cin>>sex[student_id2];
            cout<<"                   Blood Group : ";
            cin>>blood_gp[student_id2];
            cout<<"                   CLASS : ";
            cin>>Class[student_id2];
            
            cout<<"\nInformation Saved Successfully\n";
			cout<<"\n\n";
		}
		else 
			system("pause");
            system("cls");
			goto b;
			
			}
  




else if(i=='3')
{
	
c:                            
                          
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  STUDENT MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Serach By ID                                  |\n";
cout<<"\t\t\t\t\t\t|             2  >> Search By Name                                |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;			
if(i=='1')
{
						                           
                            cout<<"_________________________________________________________________________________student_file__________________________________________________________________";
            cout<<endl;
            cout<<"ENTER student id  = ";
            cin>>student_id3;
			cout<<"                   Name : "<<name[student_id3]<<endl;
            cout<<"                   Address : "<<address[student_id3];
            cout<<"                   Contact Number : "<<contact[student_id3];
            cout<<"                   Age : "<<age[student_id3]<<endl;
            cout<<"                   Sex : "<<sex[student_id3];
            cout<<"                   Blood Group : "<<blood_gp[student_id3]<<endl;
            cout<<"                   Class: "<<Class[student_id3];
             system("PAUSE");
      system("CLS");
      goto b;   
}
else if(i=='2')
{    cout<<"ENTER NAME OF STUDENT: ";
     cin>>nm;
	for(int j=1;j<=500;j++)
	{
		if(name[j]==nm)
		{   cout<<"                   Student Id:"<<j<<endl;
			cout<<"                   Name : "<<name[j]<<endl;
            cout<<"                   Address : "<<address[j];
            cout<<"                   Contact Number : "<<contact[j];
            cout<<"                   Age : "<<age[j]<<endl;
            cout<<"                   Sex : "<<sex[j];
            cout<<"                   Blood Group : "<<blood_gp[j]<<endl;
            cout<<"                   Class: "<<Class[j];
		}system("PAUSE");
      system("CLS");
      goto b; 
	 
	}
	
}
else if(i!='1'||i!='3')
{
	cout<<"\t\t\t\t\t\tWRONGE ENTERY\n";
	system("PAUSE");
      system("CLS");
	goto c;
		 }	
		
}
else if(i=='4')
{
             cout<<"ENTER STUDENT ID TO DELETE RECORD: ";
             cin>>student_id4;
		
			name[student_id4]="NO_RECORD";
			address[student_id4]="NO_RECORD";
            contact[student_id4]="NO_RECORD";
            age[student_id4]="NO_RECORD";
            sex[student_id4]="NO_RECORD";
            blood_gp[student_id4]="NO_RECORD";
            Class[student_id4]="NO_RECORD";
        
		cout<<"\t\t\t\t\t\tDELETION SUCCESSFULL";
	
             
system("PAUSE");
      system("CLS");
      goto b; 
	
}
else if(i=='5')
{
	cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|                       RECORD OF 5 STUDENTS                    |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|                                                                 |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
	ifstream ifa;	    
    ifa.open("JAWAD.txt");
    for(int j=1;j<=500;j++)
{
	 ifa>>name[j]>>contact[j]>>address[j]>>age[j]>>sex[j]>>blood_gp[j]>>Class[j];
	 
	 
    cout<<"               Student Id: "<<j<<endl;
			cout<<"               Name : "<<name[j]<<endl;
            cout<<"               Address : "<<address[j]<<"                 Contact Number : "<<contact[j]<<endl;
            cout<<"               Age : "<<age[j]<<"                     Sex : "<<sex[j]<<endl;
            cout<<"               Blood Group : "<<blood_gp[j]<<"             Class: "<<Class[j];
            cout<<endl<<endl;
    }
  
    ifa.close();
	cout<<"\n\n\n\n\n\n\n";}
	


else if(i=='6')
{

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            STUDENT  MANAGEMENT SYSTEM                                 |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                 -Brought To YOU BY Sameer Baig       |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

cout<<"\n";}



}



  
   
