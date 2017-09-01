#include<stdio.h>
#include<conio.h>
void main()
	{
   	int i,x,y;
      char c='a';

      x=1;
      y=24;
      gotoxy(x,y);
      for(i=1;i<=5;i++)
      	printf("*");
      while(c!=' ')
      	{
         	c=getch();

            if(c=='d'&& x<=74)
            	{
               	x++;
               }
           else if(c=='a' &&x>1)
           	{
            	x--;
            }
            else if(c=='w' &&y>1)
           	{
            	y--;
            }
            else if(c=='s' &&y<=24)
           	{
            	y++;
            }
            clrscr();
            gotoxy(x,y);
             for(i=1;i<=5;i++)
      			printf("*");
         }


   }
