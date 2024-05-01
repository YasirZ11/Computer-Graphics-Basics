#include "graphics.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void drawCircle(int x, int y, int xc, int yc);

	
int main()
{
	initwindow(800, 800, "Circle");
	
	int xc,yc,r,p,x,y;

	cout<<"Enter the center co-ordinates\n";
	cin>>xc>>yc;
	cout<<"Enter the radius of circle\n";
	cin>>r;
	p = 1 - r;
	x = 0;
	y = r;
	while(x < y)
	{
		drawCircle(x,y,xc,yc);
		++x;
		if(p < 0)
		{
			p = p + (2*x) + 1;
		}
		else
		{
			--y;
			p = p + (2*x) + 1 - (2*y);
		}
	}

	while (!kbhit( ))
    {
        delay(200);
    }
    getch();
}

void drawCircle(int x,int y,int xc,int yc)
{

	putpixel(x+xc,y+yc,GREEN);
	putpixel(-x+xc,y+yc,GREEN);
	putpixel(x+xc, -y+yc,GREEN);
	putpixel(-x+xc, -y+yc, GREEN);
	putpixel(y+xc, x+yc, GREEN);
	putpixel(y+xc, -x+yc, GREEN);
	putpixel(-y+xc, x+yc, GREEN);
	putpixel(-y+xc, -x+yc, GREEN);


}
