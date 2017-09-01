# include<iostream.h>
# include<conio.h>
# include<string.h>
# include<process.h>
class student
{
	private:
		char eno[10];
		char ename[20];
		int gender;
		char address[50];
		char mobileno[12];
		char emailid[20];
	public:
		void getdata();
		void showdata();
		char* getname();
		void changeaddress(char *);
		void changeeno(char *);
		void changemobileno(char *);
		void changeemailid(char *);
};
char* student::getname()
{
	return ename;
}
void student::changeaddress(char *a)
{
	strcpy(address,a);
}
void student::changeeno(char *e)
{
	strcpy(eno,e);
}
void student::changemobileno(char *m)
{
	strcpy(mobileno,m);
}
void student::changeemailid(char *e)
{
	strcpy(emailid,e);
}
void student::getdata()
{
	cout<<"\n Enter the No:-->";
	cin>>eno;
	cout<<"\n Enter the Name:-->";
	cin>>ename;
	cout<<"\n Enter the Sex:-->";
	cin>>gender;
	cout<<"\n Enter the Address:-->";
	cin>>address;
	cout<<"\n Enter the Mobile No:-->";
	cin>>mobileno;
	cout<<"\n Enter the E-mailid:-->";
	cin>>emailid;
}
void student::showdata()
{
	cout<<"\n No is:-->"<<eno;
	cout<<"\n Name is:-->"<<ename;
	if(gender==1)
	{
		cout<<"\n Sex is:-->Male";
	}
	else
	{
		cout<<"\n Sex is:-->Female";
	}
	cout<<"\n Address is:-->"<<address;
	cout<<"\n Mobile No is:-->"<<mobileno;
	cout<<"\n Email-id is:-->"<<emailid;
}

void main()
{
	student s[5];
	int i,choice,cnt=0;
	char Ename[20],Eno[20];
	char Address[50],n[10];
	char Mobileno[12],Emailid[20];
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter the Info of Student:-->",i+1;
		cout<<"\n";
		s[i].getdata();
	}

	cout<<"\n Enter the Student Name to Serch:-->";
	cin>>n;
	for(i=0;i<5;i++)
	{
		if(strcmp(s[i].getname(),n)==0)
		{
			s[i].showdata();
			   cnt=i;
		}
		getch();
	}
		cout<<"\n";
		cout<<"\n:------Manu Driven:------";
		cout<<"\n Choice 1. Eno...........";
		cout<<"\n Choice 2. Address...........";
		cout<<"\n Choice 3. MobileNo............";
		cout<<"\n Choice 4. E-Mail Id...........";
		cout<<"\n----------------------------";
		cout<<"\n";
		cout<<"\n Enter the Choice:-->";
		cin>>choice;
		if(choice<=4)
		{
		switch(choice)
		{

			case 1:
				cout<<"\n Enter the New Eno:-->";
				cin>>Eno;
				s[cnt].changeeno(Eno);
				s[cnt].showdata();
				break;

			case 2:

				cout<<"\n Enter the New Address:-->";
				cin>>Address;
				s[cnt].changeaddress(Address);
				s[cnt].showdata();
				break;

			case 3:
				cout<<"\n Enter the New Mobile No:-->";
				cin>>Mobileno;
				s[cnt].changemobileno(Mobileno);
				s[cnt].showdata();
				break;

			case 4:
				cout<<"\n Enter the New E-mail Id:-->";
				cin>>Emailid;
				s[cnt].changeemailid(Emailid);
				s[cnt].showdata();
				break;
			}
		}
		else
		{
			cout<<"\n Invalid Choice.............";
			getch();
			exit(0);
		}
getch();
}










