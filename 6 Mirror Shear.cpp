
#include "graphics.h"
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int round(float a);
void DDA(int x0,int y0,int xn,int yn,int cl);

int round(float a)
	{
		return int(a+0.5);
	}


class pixel
{
public:
	int x,y;		
	pixel()
	{
		x=0;y=0;

	}

	pixel(int x1,int y1)
		{
			x=x1,y=y1;
		}
	
	void translation(int dx,int dy)//translate method
		{
			x+=dx;
			y+=dy;
		}
	void scaling(pixel p,float sx,float sy)//scalling method
	{
	x=p.x+(x-p.x)*sx;
	y=p.y+(y-p.y)*sy;
	}

	void rotation(pixel p,float ang)//rotation method
	{
	int t1=this->x,t2=this->y;
	ang=(22*ang)/(7*180);
	x=p.x+(t1-p.x)*cos(ang)-(t2-p.y)*sin(ang);
	y=p.y+(t1-p.x)*sin(ang)+(t2-p.y)*cos(ang);
	}

	void xmirror(pixel ob, int xm)
	{
		int gap=xm - this->x;
		this->x =ob.x +(2*gap);
		this->y=this->y;
	
	}

	void ymirror(pixel ob, int ym)
	{
		int gap=ym - this->y;
		this->x =this->x;
		this->y= ob.y +(2*gap);
	
	}

	void xshear(float shx)
	{
		//this-> y=this->y;
		//this-> x  +=(y*shx);
		y=y;
		x+=(y*shx);
	}

	void yshear(float shy)
	{
		this-> x=this->x;
		this-> y  +=(x*shy);
	}
};



void DDA(int x0,int y0,int xn,int yn,int cl)  
	{
	int dx=xn-x0,dy=yn-y0,steps;
	float xinc,yinc,x=x0,y=y0;

	if(abs(dx)>abs(dy))	
	{
		steps=abs(dx);
	}
	else				
	{
		steps=abs(dy);
	}

	xinc=float(dx)/float(steps);
	yinc=float(dy)/float(steps);
	putpixel(round(x),round(y),cl);

	for(int j=0;j<steps;j++)
		{
			x+=xinc;
			y+=yinc;
			putpixel(round(x),round(y),cl);
		}

	}
class MyDesign
{
public:
pixel p1,p2,p3;

	MyDesign(pixel P1,pixel P2,pixel P3)
		{
			p1=P1;
			p2=P2;
			p3=P3;
		}

	void draw_triangle(int cl)
		{
		DDA(p1.x,p1.y,p2.x,p2.y,cl);
		DDA(p2.x,p2.y,p3.x,p3.y,cl);
		DDA(p3.x,p3.y,p1.x,p1.y,cl);
		}

	void translate(int dx,int dy)
	{
		p1.translation(dx,dy);
		p2.translation(dx,dy);
		p3.translation(dx,dy);
	
		}
	void scale(pixel p,float sx,float sy)
		{
		p1.scaling(p,sx,sy);
		p2.scaling(p,sx,sy);
		p3.scaling(p,sx,sy);
		}

	void rotate(pixel p,float ang)
	{
	p1.rotation(p,ang);
	p2.rotation(p,ang);
	p3.rotation(p,ang);
	}

	void xmir(int xm)
	{
		setcolor(GREEN);
		line(xm,0,xm,700);
	p1.xmirror(p1,xm);
	p2.xmirror(p2,xm);
	p3.xmirror(p3,xm);
	}

	void ymir(int ym)
	{
		setcolor(GREEN);
		line(0,ym,700,ym);
	p1.ymirror(p1,ym);
	p2.ymirror(p2,ym);
	p3.ymirror(p3,ym);
	}

	void xshr(float shx)
	{
	p1.xshear(shx);
	p2.xshear(shx);
	p3.xshear(shx);
	}

	void yshr(float shy)
	{
	p1.yshear(shy);
	p2.yshear(shy);
	p3.yshear(shy);
	}

};


int main()
{
	initwindow(700, 700, "My Design");

	pixel p1(300,300),p2(450,300),p3(375,175);
	MyDesign m(p1,p2,p3);

	m.draw_triangle(7);
	m.translate(100,100);
	m.draw_triangle(12);
	m.scale(p3,2,2); 
	m.rotate(p1,180); 
	m.ymir(400);
	m.xmir(250);
	m.xshr(4);
	m.yshr(4);
  m.draw_triangle(12);
 


	while (!kbhit( ))
    {
        delay(200);
    }

	cleardevice();
 
    return 0;
}

