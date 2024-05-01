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
	initwindow(1720,1280,"Train Drawing");

	DDA(100,300,100,420,7);
	DDA(100,300,250,300,7);
	DDA(250,300,250,240,7);
	DDA(250,240,320,240,7);
	DDA(320,240,320,300,7);
	DDA(320,300,450,300,7);
	DDA(450,300,450,120,7);
	DDA(450,120,600,120,7);
	DDA(600,120,600,420,7);
	DDA(100,420,600,420,7);
	DDA(500,180,550,180,7);
	DDA(500,180,500,300,7);
	DDA(550,180,550,300,7);
	DDA(500,300,550,300,7);
	
	DDA(600,380,700,380,7);
	DDA(600,400,700,400,7);
	
	DDA(700,240,700,420,7);
	DDA(700,240,950,240,7);
	DDA(950,240,950,420,7);
	DDA(700,420,950,420,7);
	
	DDA(750,300,750,350,7);
	DDA(750,300,800,300,7);
	DDA(800,300,800,350,7);
	DDA(750,350,800,350,7);
	
	DDA(850,300,850,350,7);
	DDA(850,300,900,300,7);
	DDA(900,300,900,350,7);
	DDA(850,350,900,350,7);
	
	DDA(950,380,1050,380,7);
	DDA(950,400,1050,400,7);
	
	DDA(1050,240,1050,420,7);
	DDA(1050,240,1300,240,7);
	DDA(1300,240,1300,420,7);
	DDA(1050,420,1300,420,7);
	
	DDA(1100,300,1100,350,7);
	DDA(1100,300,1150,300,7);
	DDA(1150,300,1150,350,7);
	DDA(1100,350,1150,350,7);
	
	DDA(1200,300,1200,350,7);
	DDA(1200,300,1250,300,7);
	DDA(1250,300,1250,350,7);
	DDA(1200,350,1250,350,7);
	
	DDA(80,330,100,330,7);
	DDA(80,330,80,390,7);
	DDA(80,390,100,390,7);
			
	circle(200,460,40);
	circle(200,460,30);
	circle(350,460,40);
	circle(350,460,30);
	circle(500,460,40);
	circle(500,460,30);
	
	circle(750,460,40);
	circle(750,460,30);
	circle(900,460,40);
	circle(900,460,30);
	
	circle(1100,460,40);
	circle(1100,460,30);
	circle(1250,460,40);
	circle(1250,460,30);
	
	
	
	
	getch();
	closegraph();
	return(1);
	
}
