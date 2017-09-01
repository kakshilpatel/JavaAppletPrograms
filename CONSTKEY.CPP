# include<iostream.h>
# include<conio.h>
const float PI=3.14;
float Area(float r);
float Area(float r)
{
	float ans;
	ans=PI*r*r;
	return ans;
}
void main()
{
	float Radius,ans;
	clrscr();
cout<<"\n Enter the No:-->";
cin>>Radius;
ans=Area(Radius);
cout<<"\n Ans is:-->"<<ans;
getch();
}