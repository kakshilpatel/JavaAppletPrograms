# include<stdio.h>
# include<conio.h>
void main()
{
	int i,pos,no,iteam;
	int x[10];
	clrscr();
printf("\nHow many no can be center:-->");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	printf("\n Enter the no:-->");
	scanf("%d",&x[i]);
}
printf("\nEnter the Position:-->");
scanf("%d",&pos);
if(pos<1 || pos<no)
{
	printf("\n Wrong Position");
	return;
}
else
{
	printf("\nEnter the Iteam:-->");
	scanf("%d",&iteam);
}
pos--;
for(i=no-1;i>=pos;i--)
{
	x[i+1]=x[i];
}
x[pos]=iteam;
no++;
for(i=0;i<no;i++)
{
	printf("%d,",x[i]);
}
getch();
}
