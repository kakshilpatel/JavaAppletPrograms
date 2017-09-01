# include<iostream.h>
# include<conio.h>
class Currency
{
	private:
		int rs,ps;
	public:
		void getdata(int rs,int ps);
		void printdata();
		void add(int a);
};
void Currency::getdata(int rs,int ps)
{
	this->rs=rs+ps/100;
	this->ps=ps%100;
}
void Currency::printdata()
{
	cout<<"\n Rs is:-->"<<rs;
	cout<<endl;
	cout<<"\n Ps is:-->"<<ps;
}
void Currency::add(int a)
{
	ps=ps+a;
	this->rs=rs+ps/100;
	this->ps=ps%100;
}
void main()
{
	Currency c1;
	int x,y,z;
	clrscr();
	cout<<"\nEnter the Rs:-->";
	cin>>x;
	cout<<"\n Enter the Ps:-->";
	cin>>y;
	c1.getdata(x,y);
	cout<<"\n Enter the no add into Ps:-->";
	cin>>z;
	c1.add(z);
	c1.printdata();
	getch();
}



