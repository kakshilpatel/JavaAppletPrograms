# include<iostream.h>
# include<conio.h>
int fact(int no);
int fact(int no)
{
	int i,cnt=0;
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			cnt++;
		}
	}
	return cnt;
}
int prime(int no);
int prime(int no)
{
	int ans1;
	ans1=fact(no);
	return ans1;
}
void main()
{
	int no,ans1;
	clrscr();
cout<<"Enter the No:";
cin>>no;
ans1=fact(no);
cout<<"Ans is:"<<ans1;
if(ans1==2)
{
	cout<<"\nIt is prime";
}
else
{
	cout<<"\nIt is not prime";
}
getch();
}




