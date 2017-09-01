# include<iostream.h>
# include<conio.h>
class Squre
{
	private:

	public:
	int l;
	int Area()
	{
		return l*l;
	}
};
void main()
{
	Squre r;
	int ans;
	clrscr();
	r.l=10;
	ans=r.Area();
	cout<<"\n ans is:-->"<<ans;
	getch();
}

