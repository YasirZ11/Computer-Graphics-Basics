#include<graphics.h>
#include<stdio.h>
#include<iostream>

int cl=7;

int round(float a){
	return int(a+0.5);
}

void DDA(int x0 , int y0, int xn, int yn, int cl){
	int dx=xn-x0;
	int dy=yn-y0;
	int steps;
	float xinc,yinc;
	float x=x0;
	float y=y0;
	
	if(abs(dx)>abs(dy)){
		steps=abs(dx);
	}
	else{
		steps=abs(dy);
	}
	
	xinc= float(dx)/float(steps);
	yinc=float(dy)/float(steps);
	putpixel(round(x),round(y),cl);
	
	for(int j=0; j<steps; j++){
		x=x+xinc;
		y=y+yinc;
		putpixel(round(x),round(y),cl);
	}	
}

void rec(int x1, int y1, int length, int height){
	int x2= x1+length;
	int y2=y1+height;
	
	DDA(x1,y1,x2,y1,cl);
	DDA(x2,y1,x2,y2,cl);
	DDA(x2,y2,x1,y2,cl);
	DDA(x1,y2,x1,y1,cl);
	outtextxy(x1,y1,"Before Translation");
}

void translation(int x1, int y1, int length, int height,int dx, int dy){
	int x2=x1 + length;
	int y2=y1 + height;
	
	rec(x1+dx, y1+dy,length,height);
	outtextxy(x1+dx,y1+dy, "After Translation");
}

int main(){
	initwindow(1280,720,"Translation");
	int length=200;
	int height=100;
	
	rec(100,50, length, height);
	translation(100,50,length,height,100,200);
	
	getch();
	closegraph();
	return 0;
	
}
