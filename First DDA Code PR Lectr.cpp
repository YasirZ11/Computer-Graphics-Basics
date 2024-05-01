#include "graphics.h"
#include <stdio.h>
#include <iostream>
/*start DDA method*/
int round(float a)
	{return int(a+0.5);}
void DDA(int x0,int y0,int xn,int yn,int cl)/*cl is used for color purposes*/
	{
		int dx=xn-x0,dy=yn-y0,steps;
		float xinc,yinc,x=x0,y=y0;
		if(abs(dx)>abs(dy))		{steps=abs(dx);}
		else
		{steps=abs(dy);}
		
		xinc=float(dx)/float(steps);
		yinc=float(dy)/float(steps);
		putpixel(round(x),round(y),cl);
		
		for(int j=0;j<steps;j++)
				{x+=xinc;y+=yinc;putpixel(round(x),round(y),cl);}
				
	}
int main(void)
{
	initwindow(600,600,"My Space");
	/*call fun*/
	DDA(0,0,100,100,7);
	//outtextxy(170,150,"My First Programme");
	/*clean up*/
	getch();
	closegraph();
	return 0;
}
