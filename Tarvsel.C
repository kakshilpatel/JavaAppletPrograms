# include<conio.h>
# include<conio.h>
void main()
{
	int i,x[5];
	clrscr();
for(i=0;i<5;i++)
{
	printf("\n Enter the no:-->");
	scanf("%d",&x[i]);
}
printf("\n Array is:--->");
for(i=0;i<5;i++)
{
	printf("%d,",x[i]);
}
getch();
}
