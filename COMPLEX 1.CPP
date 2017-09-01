# include<iostream.h>
# include<conio.h>
class complex
{
	private:
		int real,image;
	public:
		void getdata();
		void setdata(int r,int i);
		void printdata();
		void add(complex c1,complex c2);
		complex()
		{
		}
		complex(int r,int i)
		{
			real=r;
			image=i;
		}
};
void complex::getdata()
{
	int r,i;
	cout<<"\n Enter the  Real:-->";
	cin>>r;
	cout<<"\n Enter the Image:-->";
	cin>>i;
	real=r;
	image=i;
}
void complex::setdata(int r,int i)
{
	real=r;
	image=i;
}
void complex::printdata()
{
	cout<<"\n";
	cout<<"\n Real is:-->"<<real;
	cout<<"\n Image is:-->"<<image;
}
void complex::add(complex c3,complex c2)
{
	real=c3.real+c2.real;
	image=c3.image+c2.image;
}
/*complex ::mul(complex c4,complex c1)
{
	complex t;
	t.real=c4.real*c1.real;
	t.image=c4.image*c1.image;
	return t;
}*/
void main()
{
	complex c1(10,20),c2,c3,c4,c5;
	clrscr();
	c1.printdata();

	c2.getdata();
	c2.printdata();

	c3.setdata(30,40);
	c3.printdata();

	c4.add(c3,c2);
	c4.printdata();

	getch();
}





