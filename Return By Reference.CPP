# include<iostream.h>
# include<conio.h>
struct emp
{
	char name[20];
	int age,salary;
};
emp e1,e2;

emp &fun();
emp &fun()
{

	cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.salary;
	return e1;
}
void main()
{
	clrscr();
	cout<<"\n Enter the Name:-->";
	cin>>e1.name;
	cout<<"\n Enter the Age:-->";
	cin>>e1.age;
	cout<<"\n Enter the Salary:-->";
	cin>>e1.salary;
	cout<<"\n Enter the Name:-->";
	cin>>e2.name;
	cout<<"\n Enter the Age:-->";
	cin>>e2.age;
	cout<<"\n Enter the Salary:-->";
	cin>>e2.salary;
	fun()=e2;
	cout<<endl;
	cout<<endl<<e2.name<<endl<<e2.age<<endl<<e2.salary;
	getch();
}


