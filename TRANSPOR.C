# include<stdio.h>
# include<conio.h>
void main()
{
	int x[3][3],y[3][3],i,j;
	clrscr();
printf("The Programe Name is Trasnport of matrix\n");
printf("---------------------------------------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\n Enter the No:-->");
		scanf("%d",&x[i][j]);
	}
	printf("\n");
}
printf("-----------------------------\n");
printf(" Before Matrix of Trasport\n");
printf("-----------------------------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("   %3d",x[i][j]);
	}
	printf("\n");
}

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		y[i][j]=x[j][i];
	}
	printf("\n");
}
printf("-----------------------------\n");
printf(" After Matrix of Trasport \n");
printf("-----------------------------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("   %3d",y[i][j]);
	}
	printf("\n");
}
getch();
}

