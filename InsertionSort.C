# include<stdio.h>
# include<conio.h>
void main()
{
	int no,i,j,x[10],temp,ptr;
	clrscr();
printf("\n How many No You want to Entered:-->");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	printf("\n Enter the No[%d]:-->",i+1);
	scanf("%d",&x[i]);
}
printf("\n");
printf("\n Array before Sort:-->");
for(i=0;i<no;i++)
{
	printf("%d,",x[i]);
}
printf("\n");
for(i=1;i<no;i++)
{
	temp=x[i];
	ptr=i-1;
	while(temp<x[ptr] && ptr>=0)
	{
		if(temp<x[ptr])
		{
			x[ptr+1]=x[ptr];
			ptr--;
		}
	}
	x[ptr+1]=temp;
	printf("\n Pass %d:-->",i);
	for(j=0;j<no;j++)
	{
		printf("%d,",x[j]);
	}
	printf("\n");
}
printf("\n");
printf("\n Array After Insertion Sort:-->");
for(i=0;i<no;i++)
{
	printf("%d,",x[i]);
}
getch();
}

