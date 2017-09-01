
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   
   int gdriver=DETECT,gmode;
   int x=150,y=60,a=200;
   int z=500;

  
   initgraph(&gdriver, &gmode,"");

  
   rectangle(x, y, z,a);


   getch();
   closegraph();
}
