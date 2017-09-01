# include<iostream.h>
# include<conio.h>
class sum
{
	private:
		int no;
	public:
		int Add();
};
int sum::Add()
{
	int i=1,sum=0;
	int *p1,*p2,*p3;
	p1=&no;
	cout<<"\n Enter the No:-->";
	cin>>*p1;
	p2=&i;
	p3=&sum;
	for(*p2=1;*p2<=*p1;*p2=i+1)
	{
		*p3=(*p3)+(*p2);
	}
	return *p3;
}
void main()
{
	sum s1;
	int *p4;
	clrscr();
	*p4=s1.Add();
	cout<<"\n Ans is:-->"<<*p4;
	getch();
}






