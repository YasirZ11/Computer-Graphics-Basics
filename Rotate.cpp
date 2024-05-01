#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<cmath>

int cl=7;

int round(float a){
	return int(a+0.5);
}

void DDA(int x0, int y0 , int xn, int yn, int cl){
	int dx=xn-x0;
	int dy=yn-y0;
	int steps;
	float xinc, yinc;
	float x=x0;
	float y=y0;
	
	if(abs(dx)>abs(dy)){
		steps=abs(dx);
	}
	else{
		steps=abs(dy);
	}
	
	xinc=float(dx)/float(steps);
	yinc=float(dy)/float(steps);
	putpixel(round(x),round(y),cl);
	
	for(int j=0; j<steps; j++){
		x=x+xinc;
		y=y+yinc;
		putpixel(round(x),round(y),cl);
	}
}

void rotation(int x, int y, double angle){
	double angleR=(angle * 3.14159)/180;
	double x1=x * cos(angleR) - y * sin(angleR);
	double y1=x * sin(angleR) + y * cos(angleR);
	DDA(0,0, int(x1), int(y1), cl);
	
	outtextxy(int(x1), int(y1), "After Rotation");
}

int main(){
	initwindow(1280,720,"Rotation");
	int x= 100;
	int y=200;
	DDA(0,0,100,200,cl);
	outtextxy(100,200, "Before Rotation");
	rotation(x,y,-45.0);
	
	getch();
	closegraph();
	return 0;
}
