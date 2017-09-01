# include<stdio.h>
# include<conio.h>
void main()
{
	int x[3][3],i,j,cnt1=0,cnt2=0,cnt3=0;
	clrscr();
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\n\t =>Enter the No:-->");
		scanf("%d",&x[i][j]);
	}
	printf("\n");
}
printf("\n");
printf("     -------------\n");
printf("\tMatrix X");
printf("\n     -------------");
printf("\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("    %2d",x[i][j]);
	}
	printf("\n");
}
printf("\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(x[i][j]==0 && i<j)
		{
			cnt1++;
		}
		else if(x[i][j]==0 && i>j)
		{
			cnt2++;
		}
		else if(x[i][j]==0 && i==j)
		{
			cnt3++;
		}

	}
}
printf("\n");
if(cnt1==3)
{
	printf("------------------------------------------------------\n");
	printf("\n\tIt is lower Tringular Matrix");
	printf("\n------------------------------------------------------");
}
else if(cnt2==3)
{
	printf("------------------------------------------------------\n");
	printf("\n\tIt is Upper Tringular Matrix");
	printf("\n------------------------------------------------------");
}
else if(cnt3==3)
{
	printf("------------------------------------------------------\n");
	printf("\n\tIt is Unit Matrix");
	printf("\n------------------------------------------------------");
}
else
{
	printf("-----------------------------------------------------\n");
	printf("\n\tIt is Wrong Matrix Dispaly By the User");
	printf("\n-----------------------------------------------------");
}
getch();
}
