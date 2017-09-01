/*# include<stdio.h>
# include<conio.h>
void main()
{
	int i,j,no,x[10],cnt=20;
	textbackground(001414);
	clrscr();
cprintf("\n How many No you want to Entered:-->");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	cprintf("\n Enter the No:-->");
	scanf("%d",&x[i]);
	textcolor(i+1);
	textbackground(i);
}
printf("\n Array is:-->");
for(i=0;i<no;i++)
{
	cprintf("%d,",x[i]);
	textcolor(i);
	textbackground(i+1);
}*/
# include<stdio.h>
# include<conio.h>
void main()
{
	int i,j,no=1;
	textbackground(001230000);
	clrscr();
window(50,10,20,10);
textcolor(RED+BLINK);
textbackground(BLUE);
cprintf("Blinking\r\n");
printf("\r\n");
printf("\r\n");
printf("\r\n");
for(i=0;i<17;i++)
{
	for(j=0;j<80;j++)
		cprintf("%d",no);
		printf("\n");
		textbackground(j);
		textcolor(i+1+BLINK);
		no++;
}
getch();
}

/*#include <conio.h>

void main()
{
   textmode(BW40);
   cprintf("ABC");
   getch();

   textmode(C40);
   cprintf("ABC");
   getch();

   textmode(BW80);
   cprintf("ABC");
   getch();

   textmode(C80);
   cprintf("ABC");
   getch();

   textmode(MONO);
   cprintf("ABC");
   getch();
} */
/*#include <conio.h>

void main()
{
   clrscr();
   cprintf("The function DELLINE deletes the line containing the\r\n");
   cprintf("cursor and moves all lines below it one line up.\r\n");
   cprintf("DELLINE operates within the currently active text\r\n");
   cprintf("window.  Press any key to continue . . .");
   gotoxy(3,1);
   getch();
   delline();
   getch();
}  */


