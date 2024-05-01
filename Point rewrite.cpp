#include "graphics.h"
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
class pixel{
	
	public:
		int x;
		int y;
		
		pixel(){
			x=0;
			y=0;
		}
	
	pixel(int a,int b){
		x=a;
		y=b;
	}
	
	void translate(int dx, int dy){
		outtextxy(x+10,y+10,"Original Point");
		x+=dx;
		y+=dy;
		outtextxy(x+10,y+10,"Translated Point");
	}
	
	void draw(){
		putpixel(x,y,10);
	}
	
	void rotation(pixel p, float angle){
		int t1= this->x, t2=this->y;
		angle=(22*angle)/(7*180);	
		x=p.x+(t1-p.)*cos(ang)-(t2-p.y)*sin(ang);
		
		
	}
	
};
