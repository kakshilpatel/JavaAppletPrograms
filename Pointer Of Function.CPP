# include<iostream.h>
# include<conio.h>
class Calc
{
	private:
		int No1,No2;
	public:
		void getdata(int a,int b);
		int add();
		int sub();
		int mul();
};
void Calc:: getdata(int a,int b)
{
	No1=a;
	No2=b;
}
int Calc::add()
{
	return No1+No2;
}
int Calc::sub()
{
	return No1-No2;
}
int Calc::mul()
{
	return No1*No2;
}
void main()
{
	int no1,no2,choice,ans;
	clrscr();
	Calc c1;
	void (Calc::*p1)(int,int)=&Calc::getdata;
	int (Calc::*p2)(void)=&Calc::add;
	int (Calc::*p3)(void)=&Calc::sub;
	int (Calc::*p4)(void)=&Calc::mul;

	cout<<"\n Enter the Choice:-->";
	cin>>choice;
	cout<<"\n Enter the No:-->";
	cin>>no1;
	cout<<"\n Enter the No:-->";
	cin>>no2;
	(c1.*p1)(no1,no2);
	switch(choice)
	{
		case 1:
			ans=(c1.*p2)();
			break;
		case 2:
			ans=(c1.*p3)();
			break;
		case 3:
			ans=(c1.*p4)();
			break;
		default:
			cout<<"\n Invalid Choice.....!";
			break;
	}
	cout<<"\n Ans is:-->"<<ans;
	getch();
}
