#include <iostream>
#include<stdio.h>
#include "graphics.h"
void BLA(int x0, int y0, int x1, int y1,int cl) {
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int P;

    if (abs(dy) <= abs(dx)) {
        if (x0 > x1) {
            std::swap(x0, x1);
            std::swap(y0, y1);
        }

        int x = x0;
        int y = y0;

        if (y0 <= y1) {
            P = 2 * dy - dx;
            while (x <= x1) {
                putpixel(x, y, cl);
                if (P >= 0) {
                    y++;
                    P += 2 * (dy - dx);
                } else {
                    P += 2 * dy;
                }
                x++;
            }
        } else {
            P = 2 * dy - dx;
            while (x <= x1) {
                putpixel(x, y, cl);
                if (P >= 0) {
                    y--;
                    P += 2 * (dy - dx);
                } else {
                    P += 2 * dy;
                }
                x++;
            }
        }
    } else {
        if (y0 > y1) {
            std::swap(x0, x1);
            std::swap(y0, y1);
        }

        int x = x0;
        int y = y0;

        if (x0 <= x1) {
            P = 2 * dx - dy;
            while (y <= y1) {
                putpixel(x, y, cl);
                if (P >= 0) {
                    x++;
                    P += 2 * (dx - dy);
                } else {
                    P += 2 * dx;
                }
                y++;
            }
        } else {
            P = 2 * dx - dy;
            while (y <= y1) {
                putpixel(x, y, cl);
                if (P >= 0) {
                    x--;
                    P += 2 * (dx - dy);
                } else {
                    P += 2 * dx;
                }
                y++;
            }
        }
    }
}

using namespace std;

void drawCircle(int x_center, int y_center, int radius,int color) {
    int x = radius;
    int y = 0;
    int decision = 1 - radius;

    while (x >= y) {
        putpixel(x_center + x, y_center + y,color);
        putpixel(x_center + y, y_center + x,color);
        putpixel(x_center - y, y_center + x,color);
        putpixel(x_center - x, y_center + y,color);
        putpixel(x_center - x, y_center - y,color);
        putpixel(x_center - y, y_center - x,color);
        putpixel(x_center + y, y_center - x,color);
        putpixel(x_center + x, y_center - y,color);

        y++;

        if (decision <= 0) {
            decision += 2 * y + 1;
        } else {
            x--;
            decision += 2 * (y - x) + 1;
        }
    }
}

int main(void){
	initwindow(1600,1600,"Train & Turtle Drawing");
	
	//Train
	setcolor(4);
	outtextxy(590,220,"PS2620");
	BLA(100,250,350,250,4);
	BLA(100,250,100,430,4);
	BLA(100,430,350,430,4);
	BLA(350,250,350,430,4);
	BLA(150,300,150,370,4);
	BLA(150,300,300,300,4);
	BLA(150,370,300,370,4);
	BLA(300,300,300,370,4);
	BLA(225,300,225,370,4);
	BLA(350,290,500,290,4);
	BLA(350,310,500,310,4);
	BLA(350,380,500,380,4);
	BLA(350,400,500,400,4);
	BLA(500,250,750,250,4);
	BLA(500,250,500,430,4);
	BLA(500,430,750,430,4);
	BLA(750,250,750,430,4);
	BLA(550,300,550,370,4);
	BLA(550,300,700,300,4);
	BLA(550,370,700,370,4);
	BLA(700,300,700,370,4);
	BLA(625,300,625,370,4);
	BLA(750,290,900,290,4);
	BLA(750,310,900,310,4);
	BLA(750,380,900,380,4);
	BLA(750,400,900,400,4);
	BLA(900,250,1150,250,4);
	BLA(900,250,900,430,4);
	BLA(900,430,1150,430,4);
	BLA(1150,250,1150,430,4);
	BLA(950,300,950,370,4);
	BLA(950,300,1100,300,4);
	BLA(950,370,1100,370,4);
	BLA(1100,300,1100,370,4);
	BLA(1025,300,1025,370,4);
	BLA(1150,280,1200,280,4);
	BLA(1150,320,1200,320,4);
	BLA(1200,280,1200,320,4);
	BLA(1150,350,1200,350,4);
	BLA(1150,390,1200,390,4);
	BLA(1200,350,1200,390,4);
	BLA(1090,150,1090,170,4);
	BLA(1090,173,1090,193,4);
	BLA(1090,196,1090,250,4);
	BLA(1110,150,1110,170,4);
	BLA(1110,173,1110,193,4);		
	BLA(1110,196,1110,250,4);
	BLA(625,150,635,110,4);

	 // Draw multiple circles
    int centerX[] = {625,180,270,580,670,980,1070};
    int centerY[] = {150,430,430,430,430,430,430};
    int radii[] = {40,30,30,30,30,30,30};
    int color[]={RED,RED,RED,RED,RED,RED,RED};

    for (int i = 0; i < 7; i++) {
        drawCircle(centerX[i], centerY[i], radii[i], color[i]);
    }
    
		//Turtle
		
	BLA(625,590,625,630,7);
	BLA(625,710,625,750,7);
	BLA(625,630,655,650,7);
	BLA(625,630,595,650,7);
	BLA(655,650,655,690,7);
	BLA(595,650,595,690,7);
	BLA(595,690,625,710,7);
	BLA(655,690,625,710,7);
	BLA(555,635,595,650,7);
	BLA(655,650,695,635,7);
	BLA(655,690,695,705,7);
	BLA(595,690,555,705,7);
	BLA(610,749,625,800,7);
	BLA(640,749,625,800,7);
	
	
	int center_x[] = {625, 603, 647, 625, 680, 570, 570, 680};
    int center_y[] = {550, 540, 540, 670, 593, 593, 747,747};
    int radius_r[] = {40, 7, 7, 80, 15, 15, 15,15};
     int color_c[]={WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE,WHITE};

    for (int j = 0; j < 8; j++) {
        drawCircle(center_x[j], center_y[j],radius_r[j],color_c[j]);
    }	

    delay(5000);
  
	getch();
	closegraph();
	return(1);
	
	
}


