# include<iostream.h>
# include<conio.h>
class time
{
	private:
		int hh,mm,ss;
	public:
		void getdata();
		void printdata();
		void calc();
};
void time::getdata()
{
	cout<<"\n Enter the Second:-->";
	cin>>ss;
}
void time::printdata()
{
	cout<<"\n Time is:-->";
	cout<<hh;
	cout<<":";
	cout<<mm;
	cout<<":";
	cout<<ss;
}
void time::calc()
{
	hh=ss/3600;
	ss=ss%3600;
	mm=ss/60;
	ss=ss%60;
}
void main()
{
	time *t1;
	t1=new time;
	clrscr();
	t1->getdata();
	t1->calc();
	t1->printdata();
	getch();
}



