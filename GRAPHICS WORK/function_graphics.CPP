//Learning different functions of graphics
//using them try to make a smiley face 
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
void main(){
clrscr();
//gd is graphdriver and gm is graphmode
int gd = DETECT,gm;
//initgraph - inaliizes the graphics system
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
//setcolor - sets the current drawing color
setcolor(YELLOW);
//circle(int x, int y , int radius);
circle(300,200,80);
//setfillstyle - sets the current fill pattern and fill color
setfillstyle(SOLID_FILL,YELLOW);
/*floodfill(int x, int y, int border);
  The area bounded by the color border is flooded with current fill pattern and fill color*/
floodfill(300,200,YELLOW);
setcolor(BLACK);
//line(int x1, int y1 , int x2, int y2);
line(300,190,300,210);
setcolor(RED);
//arc(int x, int y ,int startingangle ,int endangle, int radius);
arc(300,220,180,0,25);
setcolor(YELLOW);
arc(230,155,45,255,15);
arc(370,155,295,135,15);
delay(500);
setcolor(BLACK);
//ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius)
ellipse(265,165,360,0,10,20);
ellipse(335,165,360,0,10,20);
getch();
closegraph();
}
