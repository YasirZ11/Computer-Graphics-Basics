#include "graphics.h"
#include <iostream>
#include <stdio.h>

using namespace std;

class pixel{

 public:
    int x;
    int y;
    pixel()
    {
     x=0;
     y=0;
    }
    pixel(int a,int b)
    {
     x=a;
     y=b;
    }
    void translate(int dx,int dy)
    {
     outtextxy(x+10,y+10,"original point");
     x+=dx;
     y+=dy;
     outtextxy(x+10,y+10,"translated point");
    }
    void draw()
    {
     putpixel(x,y,10);
    }
};

int main()
{
		initwindow(700, 700, "DDA");

   /*
   pixel p1(300,300);
  p1.draw();
  p1.translate(100,100);
  p1.draw();
  */

   int x,y,tx,ty;
   cout<<"Enter x  y  co-ordinates  :\t";
   cin>>x>>y;
   cout<<endl;
   cout<<"Enter the values of tx and ty :\t";
   cin>>tx>>ty;
   cout<<endl;
  

   pixel p(x,y);
   p.draw();
   p.translate(tx,ty);
   p.draw();
    
   

	while (!kbhit( ))
    {
        delay(200);
    }

	cleardevice();
 
    return 0;
}


