# include<iostream.h>
# include<conio.h>
# include<string.h>
class Student
{
	private:
		char no[10];
		char name[20];
		char address[50];
		char mobileno[12];
	public:
		void getdata();
		void printdata();
		char* searchname();
};
void Student::getdata()
{
	cout<<"\n Enter the No:-->";
	cin>>no;
	cout<<"\n Enter the Name:-->";
	cin>>name;
	cout<<"\n Enter the Address:-->";
	cin>>address;
	cout<<"\n Enter the MobileNo:-->";
	cin>>mobileno;
}
void Student::printdata()
{
	cout<<"\n No is:-->"<<no;
	cout<<"\n Name is:-->"<<name;
	cout<<"\n Address is:-->"<<address;
	cout<<"\n MobileNo is:-->"<<mobileno;
}
char* Student::searchname()
{
	return name;
}
void main()
{
	char Name[20];
	int i;
	Student *s1[3];
	s1[3]=new Student[3];
	for(i=0;i<3;i++)
	{
		cout<<"\n Enter the Info for Student:->",i+1;
		s1[i]->getdata();
	}
	cout<<"\n Search the Student Name:-->";
	cin>>Name;
	for(i=0;i<3;i++)
	{
		if(strcmp(s1[i]->searchname(),Name)==0)
		{
			s1[i]->printdata();
			break;
		}
	}
	if(i==3)
	{
		cout<<"\n Student is not Found......!";
	}
	delete []s1;
	getch();
}




