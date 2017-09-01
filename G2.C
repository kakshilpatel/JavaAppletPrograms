# include<graphics.h>
# include<stdio.h>
# include<conio.h>
void main()
{
	int gdriver=DETECT,gmode;
	int x=100,y=200;
	int z=500;
	clrscr();
initgraph(&gdriver,&gmode,"");
circle(x,y,z);
getch();
closegraph();
}