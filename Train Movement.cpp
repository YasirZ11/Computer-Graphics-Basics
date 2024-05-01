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
	initwindow(1720,1280,"Train Moving");
	
int i=1500;
while(i>=0){
		
	DDA(100+i,300,100+i,420,7);
	DDA(100+i,300,250+i,300,7);
	DDA(250+i,300,250+i,240,7);
	DDA(250+i,240,320+i,240,7);
	DDA(320+i,240,320+i,300,7);
	DDA(320+i,300,450+i,300,7);
	DDA(450+i,300,450+i,120,7);
	DDA(450+i,120,600+i,120,7);
	DDA(600+i,120,600+i,420,7);
	DDA(100+i,420,600+i,420,7);
	DDA(500+i,180,550+i,180,7);
	DDA(500+i,180,500+i,300,7);
	DDA(550+i,180,550+i,300,7);
	DDA(500+i,300,550+i,300,7);
	
	DDA(600+i,380,700+i,380,7);
	DDA(600+i,400,700+i,400,7);
	
	DDA(700+i,240,700+i,420,7);
	DDA(700+i,240,950+i,240,7);
	DDA(950+i,240,950+i,420,7);
	DDA(700+i,420,950+i,420,7);
	
	DDA(750+i,300,750+i,350,7);
	DDA(750+i,300,800+i,300,7);
	DDA(800+i,300,800+i,350,7);
	DDA(750+i,350,800+i,350,7);
	
	DDA(850+i,300,850+i,350,7);
	DDA(850+i,300,900+i,300,7);
	DDA(900+i,300,900+i,350,7);
	DDA(850+i,350,900+i,350,7);
	
	DDA(950+i,380,1050+i,380,7);
	DDA(950+i,400,1050+i,400,7);
	
	DDA(1050+i,240,1050+i,420,7);
	DDA(1050+i,240,1300+i,240,7);
	DDA(1300+i,240,1300+i,420,7);
	DDA(1050+i,420,1300+i,420,7);
	
	DDA(1100+i,300,1100+i,350,7);
	DDA(1100+i,300,1150+i,300,7);
	DDA(1150+i,300,1150+i,350,7);
	DDA(1100+i,350,1150+i,350,7);
	
	DDA(1200+i,300,1200+i,350,7);
	DDA(1200+i,300,1250+i,300,7);
	DDA(1250+i,300,1250+i,350,7);
	DDA(1200+i,350,1250+i,350,7);
	
	DDA(80+i,330,100+i,330,7);
	DDA(80+i,330,80+i,390,7);
	DDA(80+i,390,100+i,390,7);
			
	circle(200+i,460,40);
	circle(200+i,460,30);
	circle(350+i,460,40);
	circle(350+i,460,30);
	circle(500+i,460,40);
	circle(500+i,460,30);
	
	circle(750+i,460,40);
	circle(750+i,460,30);
	circle(900+i,460,40);
	circle(900+i,460,30);
	
	circle(1100+i,460,40);
	circle(1100+i,460,30);
	circle(1250+i,460,40);
	circle(1250+i,460,30);	
	
	delay(20);
	cleardevice();
	i-=5;
	
	if(i==0){
		i=1500;
	}
		

	}
	
	
	getch();
	closegraph();
	return(1);
	
}
