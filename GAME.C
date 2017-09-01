#include<stdio.h>


main()
{
int r=1,c=1,d=75;
char name[10];
clrscr();
cprintf ("Please Enter your Name:-");
scanf("%s",&name);
textattr(r+c);
	while(r<=24)
		{
			textattr(r+c);
			clrscr();
			gotoxy(c,r);
			cprintf ("%s",name);
			gotoxy(d,r);
			cprintf ("%s",name);
			delay(250);
			r++;
		}
	while(c<=75)
		{
		textattr(r+c);
		clrscr();
		gotoxy(c,r);
		cprintf ("%s",name);
		gotoxy(d,r);
		cprintf ("%s",name);
		delay(150);
		c++;d--;
		}
}
