# include<iostream.h>
# include<conio.h>
int prime(int no);
int prime(int no)
{
	int i,cnt=0;
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			cnt++;
		}
	}
	if(cnt==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int no,ans;
	clrscr();
cout<<"Enter the no:";
cin>>no;
ans=prime(no);
if(ans==1)
{
	cout<<"It is prime:";
}
else
{
	cout<<"It is not  prime:";
}
getch();
}

