# include<iostream.h>
# include<conio.h>
class Currency
{
	private:
		int ps,rs;
	public:
		void getdata(int rs,int ps);
		void printdata();
		void add(int a);
		void add(Currency c1);
		Currency Add(Currency c1,Currency c2);
};
Currency Currency::Add(Currency c1,Currency c2)
{
	Currency temp;
	temp.ps=c1.ps+c2.ps;;
	temp.rs=c1.rs+c2.rs+temp.ps/100;
	temp.ps=temp.ps%100;
	return temp;
}
void Currency::add(Currency c1)
{
	ps=ps+c1.ps;
	rs=rs+c1.rs+ps/100;
	ps=ps%100;
}
void Currency::getdata(int rs,int ps)
{
	this->rs=rs+ps/100;
	this->ps=ps%100;
}
void Currency::printdata()
{
	cout<<"\n";
	cout<<"\n Rs is:-->"<<rs;
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
	Currency c1,c2,c3;
	clrscr();
	c1.getdata(10,10);
	c1.printdata();
	c1.add(10);
	c1.printdata();

	c2.getdata(20,20);
	c1.printdata();
	c2.printdata();

	c1.add(c2);
	c2.printdata();
	c1.printdata();

	c3=c1.Add(c1,c2);
	c1.printdata();
	c2.printdata();
	c3.printdata();
	getch();
}
