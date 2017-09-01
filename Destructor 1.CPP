# include<iostream.h>
# include<conio.h>
class sum
{
	private:
		int a,b;
	public:
		int printdata();
		sum(int x,int y)
		{
			a=x;
			b=y;
		}
		~sum()
		{
		}
};
int sum::printdata()
{
	return a+b;
}
void main()
{
	int no1,no2,ans;
	clrscr();
	cout<<"\n Enter the No:-->";
	cin>>no1;
	cout<<"\n Enter the No:-->";
	cin>>no2;
	sum s1(no1,no2);
	ans=s1.printdata();
	cout<<"\n Ans is:-->"<<ans;
	getch();
}


