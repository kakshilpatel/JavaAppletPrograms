# include<stdio.h>
# include<conio.h>
void main()
{
	int x[3][3],i,j,temp1=0,temp2=0;
	clrscr();
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\n Enter the No:-->");
		scanf("%d",&x[i][j]);
	}
}
printf("-----------------------\n");
printf("      Matrix \n");
printf("-------------------------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("    %d",x[i][j]);
	}
	printf("\n");
}
printf("\n-------------------------");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(x[i][j]==0)
		{
			temp1++;
		}
		else
		{
			temp2++;
		}
	}
}
if(temp1>temp2)
{
	printf("\n It is Sparse Matrix");
	printf("\n----------------------------");
}
else
{
	printf("\n It is not Sparse Matrix");
	printf("\n-----------------------------");
}
getch();
}
