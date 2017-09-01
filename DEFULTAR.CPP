#include <conio.h>

void main()
{

	clrscr();
   window(10,10,40,11);
   textcolor(RED+BLINK);
   textbackground(BLUE);
   cprintf("This is a test\r\n");

   getch();
}
