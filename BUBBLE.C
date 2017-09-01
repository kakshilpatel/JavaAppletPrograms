# include<stdio.h>
# include<conio.h>
void main()
{
	int i,j,x[10],no,last,cnt=0,temp,k;
	clrscr();
printf("\n\t :===>How Many No can be Entered:----->");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	printf("\n\t Enter the No:----->");
	scanf("%d",&x[i]);
}
printf("\n");
printf("\n\t :===>Array Before Bubble:----->");
for(i=0;i<no;i++)
{
	printf("%d,",x[i]);
}
printf("\n");
last=no-1;
for(i=0;i<no-1;i++)
{
	for(j=0;j<last;j++)
	{
		if(x[j]>x[j+1])
		{
			temp=x[j];
			x[j]=x[j+1];
			x[j+1]=temp;
			cnt++;
		}
		printf("\n\t Pass [%d]:",i+1);
			for(k=0;k<no;k++)
		{
			printf("%d,",x[k]);
		}
	}
	printf("\n");
		if(cnt==0)
		{
			break;
		}
		else
		{
			last--;
		}

}
printf("\n\t 	--------:-Bubble Sort-:---------");
printf("\n");
printf("\n\t :===>Array After Sorting:----->");
for(i=0;i<no;i++)
{
	printf("%d,",x[i]);
}
getch();
}