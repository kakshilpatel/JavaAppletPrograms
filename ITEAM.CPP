# include<iostream.h>
# include<conio.h>
# include<stdio.h>
class iteam
{
	private:
		int Iteam_code;
		char Iteam_name[20];
		int Iteam_price;
	public:
		void getdata();
		void printdata();
		void calc(int a);
};
void iteam::getdata()
{
	cout<<"\n Enter the Iteam Code:-->";
	cin>>Iteam_code;
	cout<<"\n Enter the Iteam Name:-->";
	cin>>Iteam_name;
	cout<<"\n enter the Iteam Price:-->";
	cin>>Iteam_price;
}
void iteam::calc(int a)
{
	a=(Iteam_price*a)/100;
	Iteam_price=Iteam_price+a;
}
void iteam::printdata()
{
	cout<<"\n";
	cout<<"\n Iteam Code is:-->"<<Iteam_code;
	cout<<"\n Iteam Name is:-->"<<Iteam_name;
	cout<<"\n Iteam Price is:-->"<<Iteam_price;
}
void main()
{
	iteam *i[3];
	i[3]=new iteam;
	int a;
	int j;
	clrscr();
	for(j=0;j<3;j++)
	{
		i[j]->getdata();
		cout<<"\n Enter the Rate Increase into Price:-->";
		cin>>a;
		i[j]->calc(a);
	}
	for(j=0;j<3;j++)
	{
		i[j]->printdata();
	}
	getch();
}



