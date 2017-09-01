# include<stdio.h>
# include<conio.h>
void main()
{
	int a[3][3],b[3][3],i,j;
	clrscr();
printf("Column Convert into Row \n");
printf("---------------------------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\n Entert the No:-->");
		scanf("%d",&a[i][j]);
	}
	printf("\n");
}
printf("-------------------------------------\n");
printf(" Befor Convert Matrix Cols into Row \n");
printf("--------------------------------------\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("   %3d",a[i][j]);
	}
	printf("\n");
}
for(j=0;j<3;j++)
{
	for(i=0;i<3;i++)
	{
		b[j][i]=a[i][j];

	}
	printf("\n");
}
printf("----------------------------------------\n");
printf(" After Convert Matrix Cols into Rows \n");
printf("----------------------------------------\n");
for(j=0;j<3;j++)
{
	for(i=0;i<3;i++)
	{
		printf("   %3d",b[j][i]);
	}
	printf("\n");
}
getch();
}