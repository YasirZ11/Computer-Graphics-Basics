#include<iostream>
#include<graphics.h>
#include<stdio.h>

int cl = 7;

int round(float a) {
    return int(a + 0.5);
}

void DDA(int x0, int y0, int xn, int yn, int cl) {
    int dx = xn - x0;
    int dy = yn - y0;
    int steps;
    float xinc, yinc;
    float x = x0;
    float y = y0;
    if (abs(dx) > abs(dy)) {
        steps = abs(dx);
    } else {
        steps = abs(dy);
    }
    xinc = float(dx) / float(steps);
    yinc = float(dy) / float(steps);
    putpixel(round(x), round(y), cl);

    for (int j = 0; j < steps; j++) {
        x = x + xinc;
        y = y + yinc;
        putpixel(round(x), round(y), cl);
    }
}

void rec(int x1, int y1, int length, int height) {
    int x2 = x1 + length;
    int y2 = y1 + height;

    DDA(x1, y1, x2, y1, cl);
    DDA(x2, y1, x2, y2, cl);
    DDA(x2, y2, x1, y2, cl);
    DDA(x1, y2, x1, y1, cl);
   outtextxy(x1, y1, "Before Scaling");
}

void scaling(int x1, int y1, int length, int height, int xtimes,int ytimes) {
	int newlength=xtimes*length;
	int newheight=ytimes*height;
    int x2 = x1 + newlength;
    int y2 = y1 + newheight;

    rec(x1,y1,newlength,newheight);
    outtextxy(x1+newlength,y1+newheight, "After Scaling");
}




int main() {
    initwindow(1280, 720, "Scaling");
    int length = 200;
    int height = 100;
    rec(100, 50, length, height);
    scaling(100, 50, length, height, 3, 4);

    getch();
    closegraph();
    return 0; // Added return statement to main function
}

