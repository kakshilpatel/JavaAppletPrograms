# include<iostream.h>
# include<conio.h>
inline int area(int l,int b);
inline int area(int l,int b)
{
	int ans;
	ans=l*b;
	return ans;
}
void main()
{
	int a,b,c;
	clrscr();
cout<<"\nEnter the no:-->";
cin>>a;
cout<<"\n Enter the o:-->";
cin>>b;
c=area(a,b);
cout<<"\n Ans is:-->"<<c;
getch();
}