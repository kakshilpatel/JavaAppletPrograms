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
	Squre r1[5];
	int ans,i;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter the No:";
		cin>>r1[i].l;
	      // ans=r1[i].Area();
	       //cout<<"\nAns is:-->"<<ans;
	      // cout<<"endl";
	}
	for(i=0;i<5;i++)
	{
		 ans=r1[i].Area();
		cout<<"\n Ans is:"<<ans;
		cout<<endl;
	}
getch();
}

