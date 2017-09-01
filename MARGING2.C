# include<stdio.h>
# include<conio.h>
void main()
{
	int x[5],y[5],z[10],i,n1,n2;
	clrscr();
printf("\n\tHow many No can be Stored:-->");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
	printf("\n\tEnter the No:-->");
	scanf("%d",&x[i]);
}
printf("\n");
printf("\n\tHow many No can be Stored:-->");
scanf("%d",&n2);
for(i=0;i<n2;i++)
{
	printf("\n\tEnter the No:-->");
	scanf("%d",&y[i]);
}
for(i=0;i<n1;i++)
{
	z[i]=x[i];
}
for(i=0;i<n2;i++)
{
	z[i+n1]=y[i];
}
printf("\n\tArray After Maerging:-->");
for(i=0;i<n1+n2;i++)
{
	printf("%d,",z[i]);
}
getch();
}