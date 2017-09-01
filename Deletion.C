# include<stdio.H>
# include<conio.h>
void main()
{
	int i,no,x[10],iteam,pos;
	clrscr();
printf("\nHow many no can be enterd:-->");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	printf("\nEnter the no:-->");
	scanf("%d",&x[i]);
}
printf("\nNo of value Before Deletd:-->");
for(i=0;i<no;i++)
{
	printf("%d,",x[i]);
}
printf("\n");
printf("\n Enter the Position:-->");
scanf("%d",&pos);
if(pos<0 || pos>no)
{
	printf("\nWrong position");
	exit();
}
iteam=x[pos-1];
printf("\n%d is Deleted",iteam);
printf("\n");
for(i=pos;i<no;i++)
{
	x[i-1]=x[i];
}
no--;
printf("\nArray after the Deletion:-->");
for(i=0;i<no;i++)
{
	printf("%d,",x[i]);
}
getch();
}

