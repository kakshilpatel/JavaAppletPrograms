# include<iostream.h>
# include<conio.h>
int temp(int no);
int temp(int no)
{
	int i,sum=0;
	for(i=1;i<=no;i++)
	{
		sum=sum+i;
	}
	return sum;
}
void main()
{
	int no,ans;
	clrscr();
cout<<"Enter the no:";
cin>>no;
ans=temp(no);
cout<<"Ans is:"<<ans;
getch();
}
