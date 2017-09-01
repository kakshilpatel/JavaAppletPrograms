# include<stdio.h>
# include<conio.h>
void printArray(int a[],int no);
void printArray(int a[],int no)
{
	int i;
	for(i=0;i<no;i++)
	{
		printf("%d,",a[i]);
	}
}
void main()
{
	int k[10],no,i,iteam,ub,lb,middle;
	clrscr();
printf("\n\tHow many No Can be Entered:-->");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	printf("\n\t Enter the No:-->");
	scanf("%d",&k[i]);
}
printf("\n\t Before serching Array:-->");
printArray(k,no);
printf("\n");
printf("\n\t Enter the Position:-->");
scanf("%d",&iteam);
lb=0;
ub=no;
while(lb<=ub)
{
	middle=(lb+ub)/2;
	if(iteam<k[middle])
	{
		ub=middle-1;
	}
	else if(iteam>k[middle])
	{
		lb=middle+1;
	}
	else
	{
		printf("------------------------------------------------------------\n");
		printf("\n\t The Position  %d is same in Array Element.........",middle+1);
		printf("\n------------------------------------------------------------");
		getch();
		 return;
	}
}
	printf("-------------------------\n");
	printf("\n\t It is not Found");
	printf("\n-------------------------");
getch();
}
