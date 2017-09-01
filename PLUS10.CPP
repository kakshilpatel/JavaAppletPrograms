# include<iostream.h>
# include<conio.h>
void calc(int a,int b,int &s,int &d,int &m);
void calc(int a,int b,int &s,int &d,int &m)
{
	s=a+b;
	d=a-b;
	m=a*b;
}
void main()
{
	int x,y,sum,diff,mul;
	clrscr();
cout<<"Enter the no:-->";
cin>>x;
cout<<"Enter the no:-->";
cin>>y;
calc(x,y,sum,diff,mul);
cout<<"\nAddition is:-->"<<sum;
cout<<"\n";
cout<<"\nSubtraction is:-->"<<diff;
cout<<"\n";
cout<<"\nMultipliction is:"<<mul;
getch();
}
