# include<iostream.h>
# include<conio.h>
class Integer
{
	private:
		int a,b;
	public:
		void getdata(int x,int y);
		void printdata();
	Integer()
	{
	}
	Integer(int p,int q)
	{
		a=p;
		b=q;
	}
};
void Integer::getdata(int x,int y)
{
	a=x;
	b=y;
}
void Integer::printdata()
{
	cout<<"\n ans is:-->"<<a+b;
	cout<<endl;
}
void main()
{
	int x,y;
	clrscr();
	cout<<"\n Enter the No:-->";
	cin>>x;
	cout<<"\n Ente the No:-->";
	cin>>y;
	Integer p1(x,y),p2;
	p1.printdata();
	cout<<"\n Enter the No:-->";
	cin>>x;
	cout<<"\n Enter the No:-->";
	cin>>y;
	p2.getdata(x,y);
	p2.printdata();
	getch();
}



