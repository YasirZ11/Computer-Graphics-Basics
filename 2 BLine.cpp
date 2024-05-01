#include "graphics.h"
#include <stdio.h>
#include <iostream>
using namespace std;
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
 
    dx=abs(x1-x0);
    dy=abs(y1-y0);
 
    x=x0;
    y=y0;

	if(dx<=dy){
		
 //m>=1
	p=2*dy-dx;

	while(x<x1)
    {
        if(p>=0)
        {
            putpixel(x,y,7);
            y=y+1;
			
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p=p+2*dy;
			
        }
        x=x+1;

    }	
	}
	else
	{
	p=2*dx-dy;

	while(y<y1)
    {
        if(p>=0)
        {	x=x+1;
			p=p+2*dx-2*dy;
            putpixel(x,y,7);
            
			
            
        }
        else
		{
			p=p+2*dx;
            putpixel(x,y,7);
            
			
        }
        y=y+1;

    }
	}


}

	int main()
{
	initwindow(700, 700, "BLine");
	

	/*drawline(100,100,100,150);*/
	drawline(100,300,100,420);//m>1

	while (!kbhit( ))
    {
        delay(200);
    }
    
}
