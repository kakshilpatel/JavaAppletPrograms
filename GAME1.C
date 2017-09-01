#include<stdio.h>
main()
{
int r=10,c=40;
char ch='a';
clrscr();
while(ch!='*')
	{
	ch=getch();
	if(ch=='w')r--;
	if(ch=='s')r++;
	if(ch=='d')c++;
	if(ch=='a')c--;
	textattr(r+c);
	gotoxy(c,r);
	printf("°");
	}

}
