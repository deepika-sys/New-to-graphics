//C program for dda line drawing algorithm
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
     /*x1 and y1 are the coordinates of starting points of line. 
    x2 and y2 are the coordinates of end points of line.
    i as counter */
int x1,x2,y1,y2,i=1;
float x,y,dx,dy,steps;
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the coordinates of line.\nx1,x2,y1 and y2 are ");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
printf(" respectively.");
//calculate dx (change in x coordinate) and dy(change in y coordinate)
dx=(float)(x2-x1);
dy=(float)(y1-y2);
//case 1 -slope less than or equal to 1
if(dx>=dy){
steps =dx;
}
//case 2 - slope greater than 1
else{
steps = dy;
}
//increment in x and y by:-
dx=dx/steps;
dy=dy/steps;
//assign the initial value of x and y
x=x1;
y=y1;
while(i<=steps){
putpixel(x,y,WHITE);
x+=dx;
y+=dy;
i=i+1;
}
getch();
closegraph();
}