# include<iostream.h>
# include<conio.h>
class sum
{
	private:
		int no1,no2;
	public:
		int add();
};
int sum::add()
{
	int i=1,sum=0;
	int *p1,*p2,*p3,*p4;
	p1=&no1;
	cout<<"\n How many No You want to Entered:-->";
	cin>>no1;
	p2=&i;
	p3=&sum;
	for(*p2=i;*p2<=*p1;*p2=i+1)
	{
		p4=&no2;
		cout<<"\n enter the No:-->";
		cin>>no2;
		*p3=(*p3)+(*p4);
	}
	return *p3;
}
void main()
{
	sum s1;
	int *p5;
	clrscr();
	*p5=s1.add();
	cout<<"\n Ans is:-->"<<*p5;
	getch();
}


