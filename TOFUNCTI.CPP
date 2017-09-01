# include<iostream.h>
# include<conio.h>
int add1(int a,int b);
int add1(int a,int b)
{
	int ans;
	ans=a+b;
	return ans;
}
int add1(int a,int b ,int c);
int add1(int a,int b ,int c)
{
	int ans;
	ans=a+b+c;
	return ans;
}
void main()
{
	int x,y,z,ans;
	clrscr();
cout<<"\n Enter the no:-->";
cin>>x;
cout<<"\n Enter the no:-->";
cin>>y;
cout<<"\n Enter the no:-->";
cin>>z;
ans=add1(x,y);
cout<<"\n Ans is:-->"<<ans;
ans=add1(x,y,z);
cout<<"\n Ans is:-->"<<ans;
getch();
}
