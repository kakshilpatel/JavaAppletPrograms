# include<iostream.h>
# include<conio.h>
void temp(int a,int b,int &r,int &p);
void temp(int a,int b,int &r,int &p)
{
	r=a*b;
	p=2+a*b;
}
void main()
{
	int l,b,rec,par;
	clrscr();
cout<<"Enter the no:-->";
cin>>l;
cout<<"Enter the no:-->";
cin>>b;
temp(l,b,rec,par);
cout<<"Area of rectangle is:"<<rec;
cout<<endl;
cout<<"Parameter is:"<<par;
getch();
}