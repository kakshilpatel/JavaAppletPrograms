# include<iostream.h>
# include<conio.h>
# include<string.h>
class student
{
	private:
		char eno[10];
		char name[50];
		char address[100];
		char mobileno[12];
		char emailid[30];
		int gender;
	public:
		void getdata();
		void showdata();
		char* getname();
		void changeaddress(char *);
		void changemobileno(char *);
};
char* student::getname()
{
	return name;
}
void student::changeaddress(char *a)
{
	strcpy(address,a);
}
void student::changemobileno(char *m)
{
	strcpy(mobileno,m);
}

void student::getdata()
{
	cout<<"\n Enter the No:-->";
	cin>>eno;
	cout<<"\n Enter the Name:-->";
	cin>>name;
	cout<<"\n Enter the 0 or 1:-->";
	cin>>gender;
	cout<<"\n Enter the address:-->";
	cin>>address;
	cout<<"\n Enter the MobileNo:-->";
	cin>>mobileno;
	cout<<"\n Enter the EmailId:-->";
	cin>>emailid;
}
void student::showdata()
{
	cout<<"\n No is:-->"<<eno;
	cout<<endl;
	cout<<"\n Name is:-->"<<name;
	cout<<endl;
	if(gender==1)
	{
		cout<<"\n Gender is:-->Male";
	}
	else if(gender==0)
	{
		cout<<"\n Gender is:-->Female";
	}
	cout<<endl;
	cout<<"\n Address is:-->"<<address;
	cout<<endl;
	cout<<"\n MobileNo is:-->"<<mobileno;
	cout<<endl;
	cout<<"\n EmailId is:-->"<<emailid;
	cout<<"\n";
}
void main()
{
	student s1[5];
	char n[10];
	char add[20];
	char mobile[12];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter the Info for Student:- "<<i+1;
		cout<<"\n";
		s1[i].getdata();
	}
	cout<<"\n----------------------------------";
	cout<<"\n Enter the Student to Search:-->";
	cin>>n;
	for(i=0;i<5;i++)
	{
		if(strcmp(s1[i].getname(),n)==0)
		{
			s1[i].showdata();
			cout<<"\n--------------------------";
			cout<<"\n Enter the New Address:-->";
			cin>>add;
			cout<<"\n";
			cout<<"\n Enter the New MobileNo:-->";
			cin>>mobile;
			cout<<"\n";
			s1[i].changeaddress(add);
			s1[i].changemobileno(mobile);
			cout<<"\n--------------------------";
			s1[i].showdata();
			break;
		}
	}
	if(i==5)
	{
		cout<<"\n Invlide Entry......";
	}
	getch();
}




