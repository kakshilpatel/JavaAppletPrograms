# include<iostream.h>
# include<conio.h>
# include<ctype.h>
void main()
{
	char ch;
	clrscr();
	cout<<"Enter the Charater:";
	cin>>ch;
	ch=tolower(ch);
	switch(ch)
	{
		case 'a':
		case 'i':
		case 'e':
		case 'o':
		case 'u':
		cout<<"It is Vowle";
		break;
		default:
		cout<<"It is  not Vowle";
		break;
	}

	getch();

}