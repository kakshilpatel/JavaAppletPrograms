# include<iostream.h>
# include<conio.h>
class complex
{
	private:
		int a,b;
	public:
		complex();
		complex(int x,int y);
		void printdata();
		complex operator+(complex c2);
};
complex::complex(int x,int y)
{
	a=x;
	b=y;
}
complex::complex()
{
	a=0;
	b=0;
}
void complex::printdata()
{
	cout<<"\n A is:-->"<<a;
	cout<<"\n B is:-->"<<b;
}
complex complex::operator+(complex c2)
{
	complex temp;
	temp.a=a+c2.a;
	temp.b=b+c2.b;
	return temp;
}
void main()
{
	int No1,No2;
	clrscr();
	complex c1,c2,c3;
	cout<<"\n Enter the No:-->";
	cin>>No1;
	cout<<"\n Enter the No:-->";
	cin>>No2;
	c1=complex(No1,No2);
	c2=complex(No1,No2);
	cout<<endl;
	c1.printdata();
	cout<<"\n";
	c2.printdata();
	cout<<endl;
	c3=c1+(c2);
	c3.printdata();
	getch();
}
















