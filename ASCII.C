# include<stdio.h>
# include<conio.h>
void main()
{
char ch;
int i=0;
clrscr();
	for(i=0;i<=255;i++)
	{
		textmode(C40);
		printf("\n%d :- %c",i,i);
		if(i%20==0)
		{
			printf("\n Continue.....");
			getch();
			clrscr();
		}
	}
}