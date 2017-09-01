# include<iostream.h>
# include<conio.h>
int counter();
int counter()
{
	static int cnt=0;
	cnt++;
	return cnt;
}
void main()
{
	int count;
	clrscr();
count=counter();
cout<<"\n Counter is:-->"<<count;
count=counter();
cout<<"\n Counter is:-->"<<count;
count=counter();
cout<<"\n Counter is:-->"<<count;
getch();
}