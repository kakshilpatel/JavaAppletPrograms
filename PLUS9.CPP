# include<iostream.h>
# include<conio.h>
void swap(int &a,int &b);
void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void main()
{
	int x,y;
	clrscr();
cout<<"Enter the no:-->";
cin>>x;
cout<<"Enter the no:-->";
cin>>y;
swap(x,y);
cout<<"Value of X is:"<<x;
cout<<endl;
cout<<"Value of Y is:"<<y;
getch();
}
