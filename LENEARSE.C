# include<stdio.h>
# include<conio.h>
int printArray(int [],int no,int iteam);
int printArray(int x[],int no,int iteam)
{
	int i;
	x[no]=iteam;
	i=0;
	while(x[i]!=iteam)
	{
		i++;
	}
	return i;
}
void lenear(int [],int no);
void lenear(int x[],int no)
{
	int i;
	for(i=0;i<no;i++)
	{
		printf("%d,",x[i]);
	}
}
void main()
{
	int k[10],no,i,pos,iteam;
	clrscr();
printf("\n\tHow Namy No can be Entered:-->");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	printf("\n\t Enter the no:-->");
	scanf("%d",&k[i]);
}
printf("\n\t Array After Searching:-->");
lenear(k,no);
printf("\n");
printf("\n\tEnter the Iteam:-->");
scanf("%d",&iteam);
pos=printArray(k,no,iteam);
if(pos==no)
{
	printf("\n\tIt is not Found");
}
else
{
	printf("\n\tIt is Found...at %d Position",pos+1);
}
getch();
}
