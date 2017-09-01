# include<stdio.h>
# include<conio.h>
void printArray(int k[],int no);
void printArray(int k[],int no)
{
	int i;
	for(i=0;i<no;i++)
	{
		printf("%d,",k[i]);
	}
}
void main()
{
	int k[10],no,i,iteam,mid,ub,lb,pos;
	clrscr();
printf("\n\tHow many No can be entered:-->");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	printf("\n\t Enter the No:-->");
	scanf("%d",&k[i]);
}
printf("\n\t Array Before Searching:-->");
printArray(k,no);
printf("\n");
printf("\n\t Enter the Iteam:-->");
scanf("%d",&iteam);
lb=0;
ub=no;
while(lb<=ub)
{
	mid=(lb+ub)/2;
	if(iteam<k[mid])
	{
		ub=mid-1;
	}
	else if(iteam>k[mid])
	{
		lb=mid+1;
	}
	else
	{
		printf("\n\t  %d No is Same in Array",mid+1);
		getch();
		return;
	}
}
printf("\n\t %d No is not in Array",iteam);
getch();
}

