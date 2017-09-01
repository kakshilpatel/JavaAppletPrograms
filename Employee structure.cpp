#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	int id,salary;
   char name[10],des[20];
};

void main()
	{
   	employee s[50];
      int i,n,h=0;
      char emp[10];
      printf("\t\t\t--Employee Information--\n");
      printf("Enter number of Employees:");
      	scanf("%d",&n);

      for(i=0;i<n;i++)
      	{

             clrscr();
           printf("\t\t\t--Employee Information--\n");
           s[i].id=i+1;
           printf("Employee ID: %d\n",s[i].id);
              if(i==0)
               	getchar();
            printf("Employee Name:");
                    gets(s[i].name);
            printf("Employee Salary:");
            	scanf("%d",&s[i].salary);
               getchar();
            printf("Employee Designation:");
            	gets(s[i].des);

      	}
			clrscr();
         printf("\t\t\t--Employee Information--\n");
      	printf("Enter name of Any Employee:");
         	gets(emp);
         for(i=0;i<n;i++)
         	{
            	if(strcmp(s[i].name,emp)==0)
               	{
                  	printf("\nEmployee ID: %d\n",s[i].id);
                   	printf("Employee Name:%s\n",s[i].name);
                     printf("Employee Salary:%d\n",s[i].salary);
                   	printf("Employee Designation:%s\n",s[i].des);
                     h++;
                  }
            }
         if(h==0)
         	printf("No Employee");

         getch();
      }

