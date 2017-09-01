# include<iostream.h>
# include<conio.h>
# include<process.h>
class calc
{
	private:
		int a,b;
	public:
		int add();
		int sub();
		int mul();
		calc()
		{
		}
		calc(int x,int y)
		{
			a=x;
			b=y;
		}
};
int calc::add()
{
	return a+b;
}
int calc::sub()
{
	return a-b;
}
int calc::mul()
{
	return a*b;
}
void main()
{
	int no1,no2,ans,choice;
	clrscr();
	cout<<"\n 1.Addition......";
	cout<<"\n 2.Subtraction......";
	cout<<"\n 3.Multiplication.......";
	cout<<"\n------------------------------";
	cout<<"\n Enter the Choice:-->";
	cin>>choice;
	if(choice<=3)
	{
		cout<<"\n Enter the No:-->";
		cin>>no1;
		cout<<"\n Enter the No:-->";
		cin>>no2;
		calc c1(no1,no2);
		switch(choice)
		{
			case 1:
				ans=c1.add();
				break;
			case 2:
				ans=c1.sub();
				break;
			case 3:
				ans=c1.mul();
				break;
		}
	}
	else
	{
		cout<<"\n Invalid Choice......";
		getch();
		exit(0);
	}
	cout<<"\n Ans is:-->"<<ans;
	getch();
}




