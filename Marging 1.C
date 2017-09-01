# include<stdio.h>
# include<conio.h>
void main()
{
	int a[20],n1,b[20],n2,c[20];
	int i,j,l;
	clrscr();
printf("\n How Many no can Entered:-->");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
	printf("\n Enter the no:-->");
	scanf("%d",&a[i]);
}
printf("\n How Many no can Entered:-->");
scanf("%d",&n2);
for(j=0;j<n2;j++)
{
	printf("\n Enter the no:-->");
	scanf("%d",&b[j]);
}
i=j=l=0;
while(i<n1 && j<n2)
{
	if(a[i]<b[j])
	{
		c[l++]=a[i++];
	}
	else
	{
		c[l++]=b[j++];
	}
}
if(i==n1)
{
	while(j<n2)
	{
		c[l++]=b[j++];
	}
}
else
{
	while(i<n1)
	{
		c[l++]=a[i++];
	}
}
printf("\n Array after marging:-->");
for(i=0;i<l;i++)
{
	printf("%d,",c[i]);
}
getch();
}


