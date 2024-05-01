#include <iostream>
#include <graphics.h> 
#include<stdio.h>

void BCA(int Xc, int Yc, int R) {
    int X = 0;
    int Y = R;
    int D = 3 - 2 * R;

    while (X <= Y) {
        putpixel(Xc + X, Yc + Y, WHITE);
        putpixel(Xc - X, Yc + Y, WHITE);
        putpixel(Xc + X, Yc - Y, WHITE);
        putpixel(Xc - X, Yc - Y, WHITE);
        
		putpixel(Xc + Y, Yc + X, WHITE);
        putpixel(Xc - Y, Yc + X, WHITE);
        putpixel(Xc + Y, Yc - X, WHITE);
        putpixel(Xc - Y, Yc - X, WHITE);

        if (D < 0) {
            D = D + 4 * X + 6;
        } else {
            D = D + 4 * (X - Y) + 10;
            Y--;
        }
        X++;
    }
}

int main() {
    initwindow(1280,720,"BCA Graph");

  	BCA(200,200,100);

    getch();
    closegraph(); 

    return 0;
}

