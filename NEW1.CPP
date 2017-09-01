# include<iostream.h>
# include<conio.h>
# include<string.h>
class Emp
{
	private:
		char name[20];
		int age;
		int salary;
	public:
		void getdata(char *,int ,int );
		void printdata();
		Emp()
		{
		}
		Emp(char *n,int a,int s)
		{
			strcpy(name,n);
			age=a;
			salary=s;
		}
		~ mp()
		{
		}
};
void Emp::getdata(char *n,int a,int s)
{
	strcpy(name,n);
	age=a;
	salary=s;
}
void Emp::printdata()
{
	cout<<"\n  Name is:-->"<<name;
	cout<<"\n Age is:-->"<<age;
	cout<<"\n Salary is:-->"<<salary;
}
void main()
{
	Emp *e1;
	e1=new Emp;
	char ename[20];
	int a;
	int salary;
	clrscr();
	cout<<"\n Enter the  Ename:-->";
	cin>>ename;
	cout<<"\n Enter the Age:-->";
	cin>>a;
	cout<<"\n Enter the Salary:-->";
	cin>>salary;
	e1->getdata(ename,a,salary);
	cout<<"\n Enter the Name:-->";
	cin>>ename;
	cout<<"\n Enter the Age:-->";
	cin>>a;
	cout<<"\n Enter the Salary:-->";
	cin>>salary;
	Emp *e2;
	e2=new Emp(ename,a,salary);
	e1->printdata();
	e2->printdata();
	delete e1;
	delete e2;
	getch();
}










