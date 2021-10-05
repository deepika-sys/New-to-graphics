//C program for the line using Bresenham's line drawing algorithm 
// ***********case for slope less than 1***********
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
    /*x1 and y1 are the coordinates of starting points of line. 
    x2 and y2 are the coordinates of end points of line.
    p is decision parameter*/
int x, y,x1,x2,y1,y2,p,dx,dy;
int gd = DETECT ,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the value");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
//calculate dx (change in x coordinate) and dy(change in y coordinate)
dy=y2-y1;
dx=x2-x1;
//assign x and y integer as x1 and y1 respectively ,for changes in points
x=x1;
y=y1;
//calculate first decision parameter
p=2*dy-dx;
//call while loop for pixel points and position 
while(x<x2){
    //as slope less than 1 so x is incremented by 1 in all pixel points
x=x+1;
    /* for change in y we calculate next decision parameter-
    if p<0  , then y = y
    else           y = y+1*/
if(p<0){
putpixel(x,y,WHITE);
p=p=2*dy;
y=y;
}
else{
putpixel(x,y,WHITE);
p=p+2*dy-2*dx;
y=y +1 ;
}}
getch();
closegraph();
}