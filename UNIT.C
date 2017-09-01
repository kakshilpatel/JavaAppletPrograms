# include<stdio.h>
# include<conio.h>
void main()
{
	int x[3][3],i,j,cnt=0;
	clrscr();
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\n ->Enter the No:-->");
		scanf("%d",&x[i][j]);
	}
}
printf("-------------------------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("   %2d",x[i][j]);

	}
	printf("\n");
}
printf("-----------------------------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(x[i][j]==1 && i==j)
		{
			cnt++;
		}
	}
}
if(cnt==3)
{
	printf("\n =>It is Unit Matrix");
}
else
{
	printf("\n ->It is not Unit Matrix");
}
getch();
}




