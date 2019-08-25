#include<iostream>
#include<cstring>
#include <cctype>
#include<fstream>
#include<cmath>
#include<ctime>
#include<conio.h>
#include<windows.h>
using namespace std;
time_t t = time(NULL);
tm* timePtr = localtime(&t);
class Pharmacyscreen
{   string username,pass;
    char ch,ch1;
	int option;
    public:
    Pharmacyscreen(){
	username="";
    pass="";}
	void mainscreen1(){
a:  cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t<<LGU PHARMACY>>\n";
	system("color FD");
	cout<<"\t\t\t\t\t\t\t\t      _________\n";  
    cout<<"\t\t\t\t\t\t\t\t     |         |     DHA PHASE 6\n";
	cout<<"\t\t\t\t\t\t\t\t     |    |    |     LAHORE\n";
	cout<<"\t\t\t\t\t\t\t\t     | ------- |     PAKISTAN\n";       
    cout<<"\t\t\t\t\t\t\t\t     |    |    |\n";     
	cout<<"\t\t\t\t\t\t\t\t     |_________|\n\n";
    cout<<"\t\t\t\t\t\t\t\t      USERNAME\t";                      
	ch1 = _getch();
    while(ch1 != 13){
    username.push_back(ch1);
    cout << '*';
    ch1 =_getch();}
	cout<<"\n\t\t\t\t\t\t\t\t      PASSWORD\t";
	ch = _getch();
    while(ch != 13){
    pass.push_back(ch);
    cout << '*';
    ch =_getch();}
	if(username=="LGU"&&pass=="JAWAD"||pass=="QASIM"||pass=="BILAL"||pass=="KALSOOM"||pass=="NIDA"||pass=="SANAWAR"||pass=="HASEEB"){
	cout<<"\n\t\t\t\t\t\t\t\t\t\tACCESS GRANTED!\n";
	cout<<"\t\t\t\t\t\t\t\t\t    ";
	for(int i=0;i<=100;i++){
	Sleep(0.1);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tLOADING\t"<<i<<"%";
	if(i==100){
	Sleep(1000);}}
	system("cls");}
	else {
	ch='0';
	cout<<"\n\t\t\t\t\t\t\t\t\t\tuser name or password wronge!\n";
	cout<<"\t\t\t\t\t\t\t\t\t        ";
	system("PAUSE");
    system("CLS");
    goto a;}}
void mainscreen2()
{{  system("color FD");
    cout<<"\t _________\n";  
    cout<<"\t|         |\n";
    cout<<"\t|    |    |\n"; 
    cout<<"\t| ------- |   WELCOME TO LGU PHARMACY  \n";       
    cout<<"\t|    |    |\n";     
    cout<<"\t|_________|\n\n";              
    cout<<"\n\n\t\t\t\t\t\t\t\t\t @@@@@@@@@@@@@@@@@@\n";}
    cout<<"\t\t\t\t\t\t\t\t\t @@|  MAIN MENU |@@\n";
    cout<<"\t\t\t\t\t\t\t\t\t @@@@@@@@@@@@@@@@@@\n\n\n\n";  
    cout<<"\t\t         @@@@@@@@@@@@@@@                  @@@@@@@@@@@@@@@                  @@@@@@@@@@@@@@@                @@@@@@@@@@@@@@\n";
    cout<<"\t\t         @@|MEDICINE|@@@                  @@| STAFF  |@@@                  @@| COMPANY |@@                @@|  SALE |@@@\n";
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t@@                             @@                                @@                               @@                           @@\n";
    cout<<"\t\t@@                             @@                                @@                               @@                           @@\n";
    cout<<"\t\t@@                             @@                                @@                               @@                           @@\n";           
    cout<<"\t\t@@       1.ADD MEDICINE        @@         5.ADD STAFF            @@          9.ADD COMPANY        @@                           @@\n"; 	
    cout<<"\t\t@@                             @@                                @@                               @@        13.RETAIL SALE     @@\n"; 
    cout<<"\t\t@@       2.VIEW STOCK          @@         6.VIEW STAFF           @@          10.VIEW COMPANY      @@                           @@\n"; 
    cout<<"\t\t@@                             @@                                @@                               @@                           @@\n"; 
    cout<<"\t\t@@       3.MODIFY STOCK        @@         7.MODIFY STAFF         @@         11.MODIFY COMPANY     @@        14.VIEW SALE       @@\n"; 
    cout<<"\t\t@@                             @@                                @@                               @@                           @@\n"; 
    cout<<"\t\t@@       4.DELETE MEDICINE     @@         8.DELETE STAFF         @@         12.DELETE COMPANY     @@                           @@\n";
    cout<<"\t\t@@                             @@                                @@                               @@                           @@\n";
    cout<<"\t\t@@                             @@                                @@                               @@                           @@\n";
    cout<<"\t\t@@                             @@                                @@                               @@                           @@\n";  	
    cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	}
	void readfile(string a[10],string n){
	ifstream op;
	op.open(n.c_str());
	for(int i=1;i<10;i++) {
    op>>a[i];
    for(int j=i;j<10;j++){
	if(a[i]=="\n"||a[i]=="  "||a[i]=="\0"||a[i]=="    "||a[i]=="      "){
	a[j]=a[j+1];}}}
	op.close();  }
	void writefile(int id1,string a[10],string n)
	{
	int len=0;
	int len1;
    ofstream o;
	o.open (n.c_str());
	for(int i=1;i<id1;i++)
    {
    len=len+a[i].length();
    }
    o.seekp(0);
    for(int i=1;i<id1;i++)
    {
    o<<a[i]<<"  \n";
	}
s: cin>>a[id1];
	if(n=="BuyPrice.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isdigit (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Buy Price Again beacuse it contain annonymous digit ";
		goto s;
	}
    }}
    	if(n=="companyphone.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isdigit (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Company No Again beacuse it contain annonymous character ";
		goto s;
	}
    }}
    	if(n=="companyperson.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isalpha (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Company Person Name Again beacuse it contain annonymous character = ";
		goto s;
	}
    }}
    if(n=="Manufacturer.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isalpha (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Manufacturing company Name Again beacuse it contain annonymous character = ";
		goto s;
	}
    }}
    if(n=="mednm.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isalpha (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Medicine Name Again beacuse it contain annonymous character = ";
		goto s;
	}
    }}
    	if(n=="Phone_no.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isdigit (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Phone No Again beacuse it contain annonymous character ";
		goto s;
	}
    }}
    if(n=="Quantity.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isdigit (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Quantity Again beacuse it contain annonymous character ";
		goto s;
	}
    }}
    if(n=="SalePrice.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isdigit (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter SalePrice Again beacuse it contain annonymous character ";
		goto s;
	}
    }}
    if(n=="staffage.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isdigit (a[id1][i])||a[id1]>"100") {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Age Again beacuse it contain annonymous character ";
		goto s;
	}
    }}
    if(n=="staffbldgrp.txt")
	{
	if(a[id1]!="A+"||a[id1]!="A-"||a[id1]!="B+"||a[id1]!="B-"||a[id1]!="O+"||a[id1]!="O-")
         {
		     
       cout<<"\n\n";
		cout<<"\t\tEnter Blood Group Again beacuse it contain annonymous character ";
		goto s;
	}
    }
    if(n=="staffgendre.txt")
	{
	if(a[id1]!="M"||a[id1]!="F")
         {
		     
       cout<<"\n\n";
		cout<<"\t\tEnter Gender Again beacuse it contain annonymous character ";
		goto s;
	}
    }
     if(n=="staffnm.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isalpha (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter  Name Again beacuse it contain annonymous character = ";
		goto s;
	}
    }}
     if(n=="staffsalary.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isdigit (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Salary Again beacuse it contain annonymous character ";
		goto s;
	}
    }}
     if(n=="staffphoneno.txt")
	{
	for (int i = 0; i <a[id1].length(); i++) {
       
		 if (! std::isdigit (a[id1][i])) {
           
       cout<<"\n\n";
		cout<<"\t\tEnter Phone No Again beacuse it contain annonymous character ";
		goto s;
	}
    }}
    
    
    
    len1=2+a[id1].length();
    if(id1==1)
    {
    o.seekp(len);
    o<<a[id1]<<"\n",len1;
    o.seekp(len+len1);
	}
	else
	{
	o.seekp(len+2);
    o<<"\n"<<a[id1]<<"\n",len1;
    o.seekp(4+len+len1);}
    for(int i=id1+1;i<10;i++)
    {
    o<<a[i]<<"\n";
	}
    o.close();
	}
	void deletfiledata(int id1,string a[10],string n)
	{
	for(int i=1;i<10;i++){
	if(a[i]==a[id1])
	{
	for(int j=i;j<10;j++)
	{
	a[j]=a[j+1];
	}
	}}
	ofstream o;
	o.open(n.c_str());
	for(int i=1;i<10;i++)
    {
    o<<a[i]<<"\n";
	}
	o.close();
	}};
class Medicine:public Pharmacyscreen
{
protected:
	string name,Name[1000],ProDate[1000],ExpDate[1000],category[1000],Manufacturer[1000];
	string  option,Quantity[1000],BuyPrice[1000],SalePrice[1000];
	int id1,id,len,len1,len2,len3,len4,len5,len6,len7,len8,len9,len10,len11,len12,len13,len14,len15,len16;
	public:
	Medicine()
	{
	len=len2=len4=len6=len8=len10=len12=len14=len16=0;
	}
void AddMedicine()
{   system("PAUSE");
    system("CLS"); 
	system("color FD");  
    cout<<"\n\n\t\t\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t\t\t| ------- |   ADD NEW MEDICINE  \n";       
    cout<<"\t\t\t\t\t\t\t\t\t|____|____|\n";        
    cout<<"\n\n\n\n\t\tENTER PRODUCT ID = ";
    cin>>id1;
    cout<<"\n\n";
    cout<<"\t\tENTER NAME OF MEDICINE = ";
    Pharmacyscreen::readfile(Name,"mednm.txt");
    Pharmacyscreen::writefile(id1,Name,"mednm.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER PRODUCTION DATE OF MEDICINE = ";
    Pharmacyscreen::readfile(ProDate,"ProDate.txt");
    Pharmacyscreen::writefile(id1,ProDate,"ProDate.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER EXPIRY DATE OF MEDICINE = ";
    Pharmacyscreen::readfile(ExpDate,"ExpDate.txt");
    Pharmacyscreen::writefile(id1,ExpDate,"ExpDate.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER CATEGORY(Tab/Cap/Syp) OF MEDICINE = ";
    Pharmacyscreen::readfile(category,"category.txt");
    Pharmacyscreen::writefile(id1,category,"category.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Manufacturer OF MEDICINE = ";
    Pharmacyscreen::readfile(Manufacturer,"Manufacturer.txt");
    Pharmacyscreen::writefile(id1,Manufacturer,"Manufacturer.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Quantity OF MEDICINE = ";
    Pharmacyscreen::readfile(Quantity,"Quantity.txt");
    Pharmacyscreen::writefile(id1,Quantity,"Quantity.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Buyprice OF MEDICINE = ";
    Pharmacyscreen::readfile(BuyPrice,"BuyPrice.txt");
    Pharmacyscreen::writefile(id1,BuyPrice,"BuyPrice.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Saleprice OF MEDICINE = ";
    Pharmacyscreen::readfile(SalePrice,"SalePrice.txt");
    Pharmacyscreen::writefile(id1,SalePrice,"SalePrice.txt");
    cout<<"\n\n";
    cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;
    cout<<"\n\n"; }
void ViewStock()
{  
    system("PAUSE");
    system("CLS");
    system("color FD");
	cout<<"\n\n\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t| ------- |          VIEW STOCK  \n";       
    cout<<"\t\t\t\t\t\t\t|____|____|\n\n\n\n\n\n";
    
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@1.DISPLAY ALL      @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@2.SEARCH  MEDICINE @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\tENTER OPTION";
    cin>>option;
    Pharmacyscreen::readfile(Name,"mednm.txt"); 
    Pharmacyscreen::readfile(ProDate,"ProDate.txt");
    Pharmacyscreen::readfile(ExpDate,"ExpDate.txt");
    Pharmacyscreen::readfile(category,"category.txt");
    Pharmacyscreen::readfile(Manufacturer,"Manufacturer.txt");
    Pharmacyscreen::readfile(Quantity,"Quantity.txt");
    Pharmacyscreen::readfile(BuyPrice,"BuyPrice.txt");
    Pharmacyscreen::readfile(SalePrice,"SalePrice.txt");
    if(option=="1")
    {
    cout<<" ----------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"|  ID  |  Name         |  Production Date  |  Expiry Date  |  Category  |  Manufacture  |  Quantity  |  Buy Price  |  Sale Price  |  Date of Entray  |\n";
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------\n";
    for(int i=1;i<=10;i++)
    {
	cout<<"|"<<"  "<<i<<"   |"<<"   "<<Name[i]<<"         "<<"   "<<ProDate[i]<<"      "<<"  "<<ExpDate[i]<<"       "<<"  "<<category[i]<<"        "<<"  "<<Manufacturer[i]<<"       "<<"  "<<Quantity[i]<<"        "<<"  "<<BuyPrice[i]<<"         "<<"  "<<SalePrice[i]<<"          "<<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<<endl;}
	}
	else  if(option=="2")
    {
    system("CLS");	
    system("PAUSE");	
    cout<<"\n\n\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t| ------- |          VIEW STOCK  \n";       
    cout<<"\t\t\t\t\t\t\t|____|____|\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\tSEARCH MEDICINE\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@1.SEARCH BY ID   @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@2.SEARCH BY NAME @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
    cin>>option;
    if(option=="1")
    {
    cout<<"\t\t\t\tENTER ID OF MEDICINE ";
    cin>>id;
   	 for(int i=1;i<=10;i++)
    {
	if(i==id)
    {
   	cout<<"\t\tNAME = "<<Name[i];
	cout<<"\n";
	cout<<"\t\tProduction Date: "<<ProDate[i];
	cout<<"\n";
	cout<<"\t\tExpire Date: "<<ExpDate[i];
	cout<<"\n";
	cout<<"\t\tCategory: "<<category[i];
	cout<<"\n";
	cout<<"\t\tManufacturer: "<<Manufacturer[i];
	cout<<"\n";
	cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;
	cout<<"\n";
	cout<<"\t\tQuantity: "<<Quantity[i];
	cout<<"\n";
	cout<<"\t\tBuying price = "<<BuyPrice[i];
	cout<<"\n";
	cout<<"\t\tSalePrice = "<<SalePrice[i];
	cout<<"\n";	}}}
    else if (option=="2")
    { cout<<"ENTER NAME  ";
    cin>>name;
    for(int i=1;i<=1000;i++)
    {	if(Name[i]==name)
    {
  	cout<<"\t\tNAME = "<<Name[i];
	cout<<"\n";
	cout<<"\t\tProduction Date: "<<ProDate[i];
	cout<<"\n";
	cout<<"\t\tExpire Date: "<<ExpDate[i];
	cout<<"\n";
	cout<<"\t\tCategory: "<<category[i];
	cout<<"\n";
	cout<<"\t\tManufacturer: "<<Manufacturer[i];
	cout<<"\n";
	cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;
	cout<<"\n";
	cout<<"\t\tQuantity: "<<Quantity[i];
	cout<<"\n";
	cout<<"\t\tBuying price = "<<BuyPrice[i];
	cout<<"\n";
	cout<<"\t\tSalePrice = "<<SalePrice[i];
	cout<<"\n";		}}}	}}
void ModifyStock()
{
	system("PAUSE");
    system("CLS"); 
	system("color 4");  
    cout<<"\n\n\t\t\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t\t\t| ------- |   ADD NEW MEDICINE  \n";       
    cout<<"\t\t\t\t\t\t\t\t\t|____|____|\n";        
    cout<<"\n\n\n\n\t\tENTER PRODUCT ID = ";
    cin>>id1;
    Pharmacyscreen::readfile(Name,"mednm.txt"); 
    Pharmacyscreen::readfile(ProDate,"ProDate.txt");
    Pharmacyscreen::readfile(ExpDate,"ExpDate.txt");
    Pharmacyscreen::readfile(category,"category.txt");
    Pharmacyscreen::readfile(Manufacturer,"Manufacturer.txt");
    Pharmacyscreen::readfile(Quantity,"Quantity.txt");
    Pharmacyscreen::readfile(BuyPrice,"BuyPrice.txt");
    Pharmacyscreen::readfile(SalePrice,"SalePrice.txt");
    cout<<"\t\t\t\t\t\t\t\t\t\tPREVIOUS RECORD:-\n\n\n ";
    for(int i=1;i<=10;i++)
    {if(i==id1)
    	{
    cout<<"\t\tNAME = "<<Name[i];
	cout<<"\n";
	cout<<"\t\tProduction Date: "<<ProDate[i];
	cout<<"\n";
	cout<<"\t\tExpire Date: "<<ExpDate[i];
	cout<<"\n";
	cout<<"\t\tCategory: "<<category[i];
	cout<<"\n";
	cout<<"\t\tManufacturer: "<<Manufacturer[i];
	cout<<"\n";
	cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;
	cout<<"\n";
	cout<<"\t\tQuantity: "<<Quantity[i];
	cout<<"\n";
	cout<<"\t\tBuying price = "<<BuyPrice[i];
	cout<<"\n";
	cout<<"\t\tSalePrice = "<<SalePrice[i];
	cout<<"\n";		}}
    cout<<"\n\n\n\n";
	cout<<"\t\t\t\t\t\tENTER NEW RECORD:-\n\n\n";
    cout<<"\t\tENTER NAME OF MEDICINE = ";
    Pharmacyscreen::writefile(id1,Name,"mednm.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER PRODUCTION DATE OF MEDICINE = ";
    Pharmacyscreen::writefile(id1,ProDate,"ProDate.txt");
    cout<<"\n\n";
	cout<<"\t\tENTER EXPIRY DATE OF MEDICINE = ";
    Pharmacyscreen::writefile(id1,ExpDate,"ExpDate.txt");
    cout<<"\n\n";
	cout<<"\t\tENTER CATEGORY(Tab/Cap/Syp) OF MEDICINE = ";
    Pharmacyscreen::writefile(id1,category,"category.txt");
    cout<<"\n\n";
	cout<<"\t\tENTER Manufacturer OF MEDICINE = ";
    Pharmacyscreen::writefile(id1,Manufacturer,"Manufacturer.txt");
    cout<<"\n\n";
	cout<<"\t\tENTER Quantity OF MEDICINE = ";
    Pharmacyscreen::writefile(id1,Quantity,"Quantity.txt");
    cout<<"\n\n";
	cout<<"\t\tENTER Buyprice OF MEDICINE = ";
    Pharmacyscreen::writefile(id1,BuyPrice,"BuyPrice.txt");
    cout<<"\n\n";
	cout<<"\t\tENTER Saleprice OF MEDICINE = ";
    Pharmacyscreen::writefile(id1,SalePrice,"SalePrice.txt");
    cout<<"\n\n";
	cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;
    cout<<"\n\n";				}				
void DeleteMedicine()
{   system("PAUSE");
    system("CLS"); 
	system("color FD");  
    cout<<"\n\n\t\t\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t\t\t| ------- |    DELETING  MEDICINE  \n";       
    cout<<"\t\t\t\t\t\t\t\t\t|____|____|\n";        
    Pharmacyscreen::readfile(Name,"mednm.txt"); 
    Pharmacyscreen::readfile(ProDate,"ProDate.txt");
    Pharmacyscreen::readfile(ExpDate,"ExpDate.txt");
    Pharmacyscreen::readfile(category,"category.txt");
    Pharmacyscreen::readfile(Manufacturer,"Manufacturer.txt");
    Pharmacyscreen::readfile(Quantity,"Quantity.txt");
    Pharmacyscreen::readfile(BuyPrice,"BuyPrice.txt");
    Pharmacyscreen::readfile(SalePrice,"SalePrice.txt");
    cout<<"\t\t\t\t\t\t\t\t\t\tPREVIOUS RECORD:-\n\n\n ";
    cout<<"ENTER ID OF MEDICINE: ";
	cin>>id1;
	Pharmacyscreen::deletfiledata(id1,Name,"mednm.txt");
    Pharmacyscreen::deletfiledata(id1,ProDate,"ProDate.txt");
    Pharmacyscreen::deletfiledata(id1,ExpDate,"ExpDate.txt");
    Pharmacyscreen::deletfiledata(id1,category,"category.txt");
    Pharmacyscreen::deletfiledata(id1,Manufacturer,"Manufacturer.txt");
    Pharmacyscreen::deletfiledata(id1,Quantity,"Quantity.txt");
    Pharmacyscreen::deletfiledata(id1,BuyPrice,"BuyPrice.txt");
    Pharmacyscreen::deletfiledata(id1,SalePrice,"SalePrice.txt");
   cout<<"\t\t\t\t\t\t____________DELETED SUCCESSFULLY__________\n\n\n\n\n";}};
class Staff:public Pharmacyscreen
{int n,id1,id;
 string name,option,Name[10],Age[10],Gender[10],BloodGroup[10],Address[10],Phone_no[10],Salary[10];
 string arr[10];
 public:
void AddStaff()
{ 	system("PAUSE");
    system("CLS"); 
	system("color FD");  
    cout<<"\n\n\t\t\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t\t\t| ------- |   ADD NEW STAFF MEMBER  \n";       
    cout<<"\t\t\t\t\t\t\t\t\t|____|____|\n";        
    cout<<"\n\n\n\n\t\tENTER Person ID = ";
    cin>>id1;
    cout<<"\n\n";
    cout<<"\t\tENTER NAME OF Person = ";
    Pharmacyscreen::readfile(Name,"staffnm.txt");
    Pharmacyscreen::writefile(id1,Name,"staffnm.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER  Person Age= ";
    Pharmacyscreen::readfile(Age,"staffage.txt");
    Pharmacyscreen::writefile(id1,Age,"staffage.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Gender of Person= ";
    Pharmacyscreen::readfile(Gender,"staffgendere.txt");
    Pharmacyscreen::writefile(id1,Gender,"staffgendere.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER BloodGroup of Person= ";
    Pharmacyscreen::readfile(BloodGroup,"staffbldgrp.txt");
    Pharmacyscreen::writefile(id1,BloodGroup,"staffbldgrp.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Adress of Person= ";
    Pharmacyscreen::readfile(Address,"staffAddress.txt");
    Pharmacyscreen::writefile(id1,Address,"staffAddress.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Phone_no of Person= ";
    Pharmacyscreen::readfile(Phone_no,"staffphoneno.txt");
    Pharmacyscreen::writefile(id1,Phone_no,"staffphoneno.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Salary of Person= ";
    Pharmacyscreen::readfile(Salary,"staffsalary.txt");
    Pharmacyscreen::writefile(id1,Salary,"staffsalary.txt");
    cout<<"\n\n";
    cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;	}
void ViewStaff()
{system("cls");
    system("color FD");
	cout<<"\n\n\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t| ------- |          VIEW STOCK  \n";       
    cout<<"\t\t\t\t\t\t\t|____|____|\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@1.DISPLAY ALL      @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@2.SEARCH  Staff    @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\tENTER OPTION";
    cin>>option;
    Pharmacyscreen::readfile(Name,"staffnm.txt");
    Pharmacyscreen::readfile(Age,"staffage.txt");
    Pharmacyscreen::readfile(Gender,"staffgendere.txt");
    Pharmacyscreen::readfile(BloodGroup,"staffbldgrp.txt");
    Pharmacyscreen::readfile(Address,"staffAddress.txt");
    Pharmacyscreen::readfile(Phone_no,"staffphoneno.txt");
    Pharmacyscreen::readfile(Salary,"staffsalary.txt");
    if(option=="1")
    {system("CLS");
cout<<"\n\n\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t| ------- |          DATA OF ALL STAFF MEMBERS  \n";       
    cout<<"\t\t\t\t\t\t\t|____|____|\n\n\n\n\n\n";
    cout<<" ----------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"|  ID  |  Name         |  Staff Age  |  Staff Gender  |  Staff Blood Group  |        Staff_Address         |    Staff_Phoneno   |  Staff_salary     |\n";
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------\n";
    for(int i=1;i<=100;i++)
    {
		cout<<"|"<<"  "<<i<<"   |"<<"   "<<Name[i]<<"         "<<"   "<<Age[i]<<"      "<<"  "<<Gender[i]<<"       "<<"  "<<BloodGroup[i]<<"               "<<"  "<<Address[i]<<"               "<<"  "<<Phone_no[i]<<"        "<<"  "<<Salary[i]<<"        |"<<endl;}
    }
	else  if(option=="2")
    {
    system("CLS");		
    cout<<"\n\n\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t| ------- |          VIEW STOCK  \n";       
    cout<<"\t\t\t\t\t\t\t|____|____|\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\tSEARCH MEDICINE\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@1.SEARCH BY ID   @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@2.SEARCH BY NAME @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
    cin>>option;
    if(option=="1")
    {
    cout<<"\t\t\t\tENTER ID OF Member ";
    cin>>id;
    for(int i=1;i<=10;i++)
    {
	if(i==id){
    cout<<"\t\tNAME = "<<Name[i];
	cout<<"\n";
	cout<<"\t\tAGE: "<<Age[i];
	cout<<"\n";
	cout<<"\t\tGENDER: "<<Gender[i];
	cout<<"\n";
	cout<<"\t\tBLOOD_GROUP: "<<BloodGroup[i];
	cout<<"\n";
	cout<<"\t\tAddress: "<<Address[i];
	cout<<"\n";	}}}
    else if (option=="2")
    {cout<<"ENTER NAME  ";
    cin>>name;
    for(int i=1;i<=1000;i++)
    {
	if(Name[i]==name)
    {
    cout<<"\t\tNAME = "<<Name[i];
	cout<<"\n";
	cout<<"\t\tAGE: "<<Age[i];
	cout<<"\n";
	cout<<"\t\tGENDER: "<<Gender[i];
	cout<<"\n";
	cout<<"\t\tBLOOD_GROUP: "<<BloodGroup[i];
	cout<<"\n";
	cout<<"\t\tAddress: "<<Address[i];
	cout<<"\n";	}}}	}	}
void ModifyStaff()
{	system("cls");
	system("color FD");
    Pharmacyscreen::readfile(Name,"staffnm.txt");
    Pharmacyscreen::readfile(Age,"staffage.txt");
    Pharmacyscreen::readfile(Gender,"staffgendere.txt");
    Pharmacyscreen::readfile(BloodGroup,"staffbldgrp.txt");
    Pharmacyscreen::readfile(Address,"staffAddress.txt");
    Pharmacyscreen::readfile(Phone_no,"staffphoneno.txt");
    Pharmacyscreen::readfile(Salary,"staffsalary.txt");	
	cout<<"\nEnter the ID which Data is Update: \n -> ";
	cin>>id;
	cout<<"\n****************************************\n";	
	cout<<" |          PREVIOUS      RECORD         |";
	cout<<"\n****************************************\n"<<endl;
	cout<<" Name :        "<<Name[id]<<endl;
	cout<<" Age :         "<<Age[id]<<endl;
	cout<<" Gender :      "<<Gender[id]<<endl;
	cout<<" BloodGroup :  "<<BloodGroup[id]<<endl;
	cout<<" Address :     "<<Address[id]<<endl;
	cout<<" Phone_no :    "<<Phone_no[id]<<endl;
	cout<<" Salary :      "<<Salary[id]<<endl;
	cout<<"\n****************************************\n";
	cout<<" |             NEW     RECORD            |";	
	cout<<"\n****************************************\n"<<endl;
	cout<<"\t\tENTER NAME OF Person = ";
    Pharmacyscreen::readfile(Name,"staffnm.txt");
    Pharmacyscreen::writefile(id,Name,"staffnm.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER  Person Age= ";
    Pharmacyscreen::readfile(Age,"staffage.txt");
    Pharmacyscreen::writefile(id,Age,"staffage.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Gender of Person= ";
    Pharmacyscreen::readfile(Gender,"staffgendere.txt");
    Pharmacyscreen::writefile(id,Gender,"staffgendere.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER BloodGroup of Person= ";
    Pharmacyscreen::readfile(BloodGroup,"staffbldgrp.txt");
    Pharmacyscreen::writefile(id,BloodGroup,"staffbldgrp.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Adress of Person= ";
    Pharmacyscreen::readfile(Address,"staffAddress.txt");
    Pharmacyscreen::writefile(id,Address,"staffAddress.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Phone_no of Person= ";
    Pharmacyscreen::readfile(Phone_no,"staffphoneno.txt");
    Pharmacyscreen::writefile(id,Phone_no,"staffphoneno.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Salary of Person= ";
    Pharmacyscreen::readfile(Salary,"staffsalary.txt");
    Pharmacyscreen::writefile(id,Salary,"staffsalary.txt");
    cout<<"\n\n";}							
void DeleteStaff()
{	system("PAUSE");
    system("CLS"); 
	system("color FD");  
    cout<<"\n\n\t\t\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t\t\t| ------- |    DELETING  MEMBER DATA  \n";       
    cout<<"\t\t\t\t\t\t\t\t\t|____|____|\n";        
    Pharmacyscreen::readfile(Name,"staffnm.txt");
    Pharmacyscreen::readfile(Age,"staffage.txt");
    Pharmacyscreen::readfile(Gender,"staffgendere.txt");
    Pharmacyscreen::readfile(BloodGroup,"staffbldgrp.txt");
    Pharmacyscreen::readfile(Address,"staffAddress.txt");
    Pharmacyscreen::readfile(Phone_no,"staffphoneno.txt");
    Pharmacyscreen::readfile(Salary,"staffsalary.txt");	    
    cout<<"ENTER ID OF MEMBER: ";
    cin>>id1;
    cout<<"\n****************************************\n";	
    cout<<" |          PREVIOUS      RECORD         |";
	cout<<"\n****************************************\n"<<endl;
   	cout<<" Name :        "<<Name[id1]<<endl;
	cout<<" Age :         "<<Age[id1]<<endl;
	cout<<" Gender :      "<<Gender[id1]<<endl;
	cout<<" BloodGroup :  "<<BloodGroup[id1]<<endl;
	cout<<" Address :     "<<Address[id1]<<endl;
	cout<<" Phone_no :    "<<Phone_no[id1]<<endl;
	cout<<" Salary :      "<<Salary[id1]<<endl;
    Pharmacyscreen::deletfiledata(id1,Name,"staffnm.txt");
    Pharmacyscreen::deletfiledata(id1,Age,"staffage.txt");
    Pharmacyscreen::deletfiledata(id1,Gender,"staffgendere.txt");
    Pharmacyscreen::deletfiledata(id1,BloodGroup,"staffbldgrp.txt");
    Pharmacyscreen::deletfiledata(id1,Address,"staffAddress.txt");
    Pharmacyscreen::deletfiledata(id1,Phone_no,"staffphoneno.txt");
    Pharmacyscreen::deletfiledata(id1,Salary,"staffsalary.txt");
    cout<<"\n****************************************"<<endl;
	cout<<" < Data will Deleted from Index  "<<id1<<" >";
	cout<<"\n****************************************"<<endl;}};
class Company:public Pharmacyscreen
{ 
int id2,id;
string option,Name[10],Address[10],Personnm[10],Email[10],phoneno[10];
string name;
public:
void AddCompany()
{
	system("PAUSE");
    system("CLS"); 
	system("color FD");  
    cout<<"\n\n\t\t\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t\t\t| ------- |   ADD COMPANY  \n";       
    cout<<"\t\t\t\t\t\t\t\t\t|____|____|\n";        
    cout<<"\n\n\n\n\t\tENTER COMPANY BATCH = ";
    cin>>id2;
    cout<<"\n\n";
    cout<<"\t\tENTER NAME OF COMPANY = ";
    Pharmacyscreen::readfile(Name,"companynm.txt");
    Pharmacyscreen::writefile(id2,Name,"companynm.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER  Address of Company= ";
    Pharmacyscreen::readfile(Address,"companyaddress.txt");
    Pharmacyscreen::writefile(id2,Address,"companyaddress.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Name of contact Person= ";
    Pharmacyscreen::readfile(Personnm,"companyperson.txt");
    Pharmacyscreen::writefile(id2,Personnm,"companyperson.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Email  of Person= ";
    Pharmacyscreen::readfile(Email,"comapnyemail.txt");
    Pharmacyscreen::writefile(id2,Email,"companyemail.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Phone Number of  Person= ";
    Pharmacyscreen::readfile(phoneno,"companyphone.txt");
    Pharmacyscreen::writefile(id2,phoneno,"companyphone.txt");
    cout<<"\n\n";
    cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;
	cout<<"\n\n";}
void ViewCompany()
{
	system("PAUSE");
    system("CLS");
    system("color FD");
	cout<<"\n\n\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t| ------- |          VIEW COMPANIES DETAILS  \n";       
    cout<<"\t\t\t\t\t\t\t|____|____|\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@1.DISPLAY ALL      @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@2.SEARCH  COMPANY  @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\tENTER OPTION";
    cin>>option;
    Pharmacyscreen::readfile(Name,"companynm.txt");
    Pharmacyscreen::readfile(Address,"companyaddress.txt");
    Pharmacyscreen::readfile(Personnm,"companyperson.txt");
    Pharmacyscreen::readfile(Email,"companyemail.txt");
    Pharmacyscreen::readfile(phoneno,"companyphone.txt");   
    if(option=="1")
    {
    cout<<" --------------------------------------------------------------------------\n";
    cout<<"|  BATCH_NO  |  Name         |  ADRESS  |  CONTACT PERSON  |  EMAIL  |  PHONE_NO |\n";
    cout<<"---------------------------------------------------------------------------\n";
    for(int i=1;i<10;i++)
    {Name[10],Address[10],Personnm[10],Email[10],phoneno[10];
	cout<<"|"<<"      "<<i<<"   |"<<"   "<<Name[i]<<"             "<<"   "<<Address[i]<<"      "<<"  "<<Personnm[i]<<"       "<<"  "<<Email[i]<<"              "<<"  "<<phoneno[i]<<endl;}
}
    else  if(option=="2")
    {
    system("CLS");	
    system("PAUSE");	
    cout<<"\n\n\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t| ------- |          VIEW STOCK  \n";       
    cout<<"\t\t\t\t\t\t\t|____|____|\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\tSEARCH COMPANY\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@1.SEARCH BY ID   @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@2.SEARCH BY NAME @@\n";
    cout<<"\t\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
    cin>>option;
    if(option=="1")
    {
    cout<<"\t\t\t\tENTER ID OF MEDICINE ";
    cin>>id;
    for(int i=1;i<10;i++)
    {
	if(i==id)
    {
    cout<<"\t\tCOMPANY NAME = "<<Name[i];
	cout<<"\n";
	cout<<"\t\tCOMPANY ADDRESS: "<<Address[i];
	cout<<"\n";
	cout<<"\t\tCONTACT PERSON NAME: "<<Personnm[i];
	cout<<"\n";
	cout<<"\t\tEmail: "<<Email[i];
	cout<<"\n";
	cout<<"\t\tPHONE_NO: "<<phoneno[i];
	cout<<"\n";
	cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;
	cout<<"\n";		}}}
    else if (option=="2")
    {
    cout<<"\t\tENTER NAME  ";
    cin>>name;
    for(int i=1;i<10;i++)
    {
	if(Name[i]==name){
    cout<<"\t\tCOMPANY NAME = "<<Name[i];
	cout<<"\n";
	cout<<"\t\tCOMPANY ADDRESS: "<<Address[i];
	cout<<"\n";
	cout<<"\t\tCONTACT PERSON NAME: "<<Personnm[i];
	cout<<"\n";
	cout<<"\t\tEmail: "<<Email[i];
	cout<<"\n";
	cout<<"\t\tPHONE_NO: "<<phoneno[i];
	cout<<"\n";
	cout << "\t\tEntry Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
	cout << "\t\tTime     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec)+25<< endl;
	cout<<"\n";		}}}	}}
void ModifyCompany()
{
	system("cls");
	system("color FD");
	cout<<"\n\n\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t| ------- |          MODIFYING COMPANIES DETAILS  \n";       
    cout<<"\t\t\t\t\t\t\t|____|____|\n\n\n\n\n\n";
 	Pharmacyscreen::readfile(Name,"companynm.txt");
    Pharmacyscreen::readfile(Address,"companyaddress.txt");
    Pharmacyscreen::readfile(Personnm,"companyperson.txt");
    Pharmacyscreen::readfile(Email,"companyemail.txt");
    Pharmacyscreen::readfile(phoneno,"companyphone.txt");  
    cout<<"ENTER BATCH NO OF COMPANY : ";
	cin>>id;
	cout<<"\n****************************************\n";	
	cout<<" |          PREVIOUS      RECORD         |";
	cout<<"\n****************************************\n"<<endl;
	cout<<"\t\tCOMPANY NAME = "<<Name[id];
	cout<<"\n";
	cout<<"\t\tCOMPANY ADDRESS: "<<Address[id];
	cout<<"\n";
	cout<<"\t\tCONTACT PERSON NAME: "<<Personnm[id];
	cout<<"\n";
	cout<<"\t\tEmail: "<<Email[id];
	cout<<"\n";
	cout<<"\t\tPHONE_NO: "<<phoneno[id];
	cout<<"\n";
	cout<<"\n****************************************\n";
	cout<<" |             NEW     RECORD            |";	
	cout<<"\n****************************************\n"<<endl; 
    cout<<"\t\tENTER NAME OF COMPANY = ";
    Pharmacyscreen::readfile(Name,"companynm.txt");
    Pharmacyscreen::writefile(id,Name,"companynm.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER  Address of Company= ";
    Pharmacyscreen::readfile(Address,"companyaddress.txt");
    Pharmacyscreen::writefile(id,Address,"companyaddress.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Name of contact Person= ";
    Pharmacyscreen::readfile(Personnm,"companyperson.txt");
    Pharmacyscreen::writefile(id,Personnm,"companyperson.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Email  of Person= ";
    Pharmacyscreen::readfile(Email,"comapnyemail.txt");
    Pharmacyscreen::writefile(id,Email,"companyemail.txt");
    cout<<"\n\n";
    cout<<"\t\tENTER Phone Number of  Person= ";
    Pharmacyscreen::readfile(phoneno,"companyphone.txt");
    Pharmacyscreen::writefile(id,phoneno,"companyphone.txt");
    cout<<"\n\n";
	cout<<"\n****************************************\n";
	cout<<" |             MODIFIED SUCCESSFULLY     |";	
	cout<<"\n****************************************\n"<<endl;			}				
void DeleteCompany()
{
	system("PAUSE");
    system("CLS"); 
	system("color FD"); 
	cout<<"\n\n\t\t\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t\t\t| ------- |    DELETING  COMANY DATA  \n";       
    cout<<"\t\t\t\t\t\t\t\t\t|____|____|\n";  
	Pharmacyscreen::readfile(Name,"companynm.txt");
    Pharmacyscreen::readfile(Address,"companyaddress.txt");
    Pharmacyscreen::readfile(Personnm,"companyperson.txt");
    Pharmacyscreen::readfile(Email,"companyemail.txt");
    Pharmacyscreen::readfile(phoneno,"companyphone.txt");
    cout<<"ENTER BATCH OF COMPANY: ";
	cin>>id2;
    cout<<"\n****************************************\n";	
	cout<<" |          PREVIOUS      RECORD         |";
	cout<<"\n****************************************\n"<<endl;
   	cout<<" COMPANY NAME :        "<<Name[id2]<<endl;
	cout<<" ADDRESS :         "<<Address[id2]<<endl;
	cout<<" CONTACT PERSON NAME :      "<<Personnm[id2]<<endl;
	cout<<" EMAIL :  "<<Email[id2]<<endl;
	cout<<" PHONE NO :     "<<phoneno[id2]<<endl;
	Pharmacyscreen::deletfiledata(id2,Name,"companynm.txt");
    Pharmacyscreen::deletfiledata(id2,Address,"companyaddress.txt");
    Pharmacyscreen::deletfiledata(id2,Personnm,"companyperson.txt");
    Pharmacyscreen::deletfiledata(id2,Email,"comapnyemail.txt");
    Pharmacyscreen::deletfiledata(id2,phoneno,"companyphone.txt");
   	cout<<"\n****************************************"<<endl;
	cout<<" < Data will Deleted from Index  "<<id2<<" >";
	cout<<"\n****************************************"<<endl;}};
class Sale:public Medicine
{
	static int flag1;
	int flag,m,n,a[10],b[10],Quantity,quantity[10],price[10];
	string name[10];
	static int Price;
	public:
	Sale()
	{flag=1;flag1=1;}
	void RetailSale()
{   system("PAUSE");
    system("CLS");   
    Pharmacyscreen::readfile(Name,"mednm.txt");
    ifstream o;
    o.open("SalePrice.txt");
    for(int i=1;i<10;i++){
    o>>a[i];	}
a:  cout<<"SELECT MEDICINE:\n";
    for(int i=1;i<10;i++){
	cout<<"\t"<<i<<"-"<<Name[i]<<endl;}
    cout<<"ENTER MEDICINE SERIEAL NO : ";
    cin>>n;
    cout<<"ENTER QUANTITY ";
    cin>>Quantity;
    name[flag]=Name[n];
	quantity[flag]=Quantity;
    b[flag]=a[n];
    Price=Price+Quantity*a[n];
	price[flag]=Price;
	ifstream n;
	n.open("Retail.txt");
	n>>flag1;
	n.close();	
	cout<<"PRICE: "<<Price<<endl;
    cout<<"\t\t\t\t\t\t *******************************************\n";
    cout<<"\t\t\t\t\t\t| 1-SUBMIT ORDER   |  2-ADD MEDICINE       |\n";
    cout<<" \t\t\t\t\t\t*******************************************\n";
    cin>>m;
    if(m==1){
    
	cout<<" -----------------------------------------------------------------------\n";
    cout<<"|  MEDICINE_NAME |    QUANITY   |  TOTAL  |  PER UNIT COST  |  BILL_NO  |\n";
    cout<<" -----------------------------------------------------------------------\n";
	for(int i=1;i<=flag;i++)
	{
	cout<<" "<<name[i]<<"              "<<quantity[i]<<"             "<<price[i]<<"            "<<b[i]<<"             "<<flag1<<endl;
	flag1++;}
    cout<<"\t\t\t\t\t\t-------------------------------------------------------------\n";
    ofstream op;
	op.open("Retail.txt");
	for(int i=1;i<=flag;i++){
	op<<flag1<<endl<<quantity[i]<<endl<<price[i]<<endl<<b[i]<<endl<<name[i]<<endl;
	op.close();}}
    else if(m==2)
    {   flag++;
	goto a;}}
void ViewSale()
 {
 		system("color FD"); 
	cout<<"\n\n\t\t\t\t\t\t\t\t\t _________\n";  
    cout<<"\t\t\t\t\t\t\t\t\t|    |    |\n"; 
	cout<<"\t\t\t\t\t\t\t\t\t| ------- |    DELETING  SEARCHING BILL DATA  \n";       
    cout<<"\t\t\t\t\t\t\t\t\t|____|____|\n";  
 	int bill,bill2;
 	cout<<"\n\n\n\t\t\t\t\t\tEnter Bill No ";
 	cin>>bill;
 	ifstream op;
 		op.open("Retail.txt");
	
	
		op>>bill2>>quantity[0]>>price[0]>>b[0]>>name[0];

 	if(bill==bill2-1)
 	{
 	
	 ifstream op;

	op.close();

	cout<<"\n\n\t\t\t\t\t\tBill No = "<<bill2-1<<endl<<"\n\n\t\t\t\t\t\tQuantity = "<<quantity[0]<<endl<<"\n\n\t\t\t\t\t\tPrice = "<<price[0]<<endl<<"\n\n\t\t\t\t\t\tPer unit cost = "<<b[0]<<endl<<"\n\n\t\t\t\t\t\tName of Medicine : "<<name[0]<<endl;
}
else 
{
	cout<<"\t\t\t\t\t\tSorry NO Record On That Bill no ";
}
}

};
int Sale::Price=0;	
int Sale::flag1=0;
int main()
{   int ser;
    Pharmacyscreen pcy;
    Medicine med;
    Staff stf;
    Company com;
    Sale sl;
    pcy.mainscreen1();
    b:
    pcy.mainscreen2();
    cout<<"\n\n\n\n\n\t\t\t\t\tENTER OPTION(Serial Number)\t";
    cin>>ser;
    switch(ser) {
	system("color 9");
	case 1:
	med.AddMedicine();
    system("PAUSE");
    system("CLS");
    goto b;
    break;
	case 2:
	med.ViewStock();
	system("PAUSE");
    system("CLS");
    goto b;
	break;
	case 3:
	med.ModifyStock();
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 4:
	med.DeleteMedicine();
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 5:
	stf.AddStaff();	
	cout<<"ADDED";
	system("PAUSE");
    system("CLS");
	goto b;
	break;		
	case 6:
	stf.ViewStaff();	
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 7:
	stf.ModifyStaff();
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 8:
	stf.DeleteStaff();
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 9:
	com.AddCompany();
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 10:
	com.ViewCompany();
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 11:
	com.ModifyCompany();
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 12:
	com.DeleteCompany();
	system("PAUSE");
    system("CLS");
	goto b;
	break;		
	case 13:
	sl.RetailSale();
	system("PAUSE");
    system("CLS");
	goto b;
	break;
	case 14:
	system("PAUSE");
    system("CLS");
	sl.ViewSale();
	system("PAUSE");
    system("CLS");
	goto b;
	break;}
	return 0;}	         
