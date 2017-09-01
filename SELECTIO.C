# include<stdio.h>
# include<conio.h>
void main()
{
	int a[10],i,j,min,n,temp,k;
	clrscr();
printf("\n\t\t:------ How many No can be Entered:-->");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\n\t\tEnter the No:-->");
	scanf("%d,",&a[i]);
}
printf("\n");
printf("\n\t\t:------ Array before  Selection Sorting:-->");
for(i=0;i<n;i++)
{
	printf("%d,",a[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
	min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
	}
	if(i!=min)
	{
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
printf("\n\t\t --->Pass %d:",i+1);
	for(k=0;k<n;k++)
	{
		printf("%d,",a[k]);
	}
	printf("\n");
}
printf("\n");
printf("\n\t\t:------ Array after Selection Sorting:-->");
for(i=0;i<n;i++)
{
	printf("%d,",a[i]);
}
getch();
}
