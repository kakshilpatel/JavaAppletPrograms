# include<iostream.h>
# include<conio.h>
void main()
{
	char ch;
	clrscr();
cout<<"Enter the Charater:";
cin>>ch;
if(ch>=65 && ch<=90)
{
	cout<<"It is Upper case";
}
else if(ch>=97 && ch<=122)
{
	cout<<"It is Lower case";
}
else
{
	cout<<"Outher";
}
getch();
}

