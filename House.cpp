#include <iostream>
#include<stdio.h>
#include "graphics.h"

int round(float a)
	{return int(a+0.5) ;}
	
void DDA(int x0,int y0,int xn,int yn,int cl){
	int dx=xn-x0, dy=yn-y0, steps;
	float xinc,yinc,x=x0,y=y0;
	
	if (abs(dx)>abs(dy)) {
		steps= abs(dx);
	}
	
	else {
		steps=abs(dy);
	}
		
	xinc=float(dx)/float(steps);
	yinc=float(dy)/float(steps);
	putpixel(round(x),round(y),cl);
	
	for(int j=0;j<steps;j++)
			{x+=xinc;y+=yinc;putpixel(round(x),round(y),cl);}
	
}

int main(void){
	initwindow(1980,1280,"House Drawing");
	
	DDA(100,325,350,100,7); 
	DDA(350,100,600,325,7);	
	DDA(140,325,350,150,7);	
	DDA(350,150,555,325,7);	
	DDA(350,100,350,150,7);	
	
	DDA(350,100,1100,100,7);
	DDA(1100,100,1300,300,7);
	DDA(100,325,600,325,7);
	DDA(600,325,1300,300,7);
	DDA(125,325,125,750,7);
	DDA(575,325,575,750,7);
	DDA(1250,300,1250,625,7);
	DDA(125,750,575,750,7);
	DDA(575,750,1250,625,7);	
	DDA(300,500,300,750,7);	
	DDA(400,500,400,750,7);	
	DDA(300,500,400,500,7);	
	DDA(1050,360,1050,480,7);
	DDA(1200,345,1200,465,7);
	DDA(1050,360,1200,345,7);
	DDA(1050,480,1200,465,7);
	DDA(1050,480,1200,465,7);
	
	DDA(1125,350,1125,470,7);
	DDA(1050,420,1200,405,7);
	
	DDA(470,100,720,320,7);
	DDA(590,100,840,315,7);
	DDA(710,100,960,313,7);
	DDA(830,100,1080,309,7);
	DDA(950,100,1200,305,7);
	DDA(1070,100,1300,302,7);
	DDA(470,210,1200,200,7);
	
	
	getch();
	closegraph();
	return(1);
	

	
}
