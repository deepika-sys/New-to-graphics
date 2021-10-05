//C program for circle using Bresenham's circle drawing.
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
//call function to putpixel for points in a circle 
//USE EIGHT WAY SYMMETRY METHOD
void plot(int x,int y,int h,int k){
putpixel(x+h,y+k,CYAN);ṇ
putpixel(y+h,x+k,WHITE);
putpixel(-x+h,-y+k,RED);
putpixel(-y+h,-x+k,GREEN);
putpixel(-x+h,y+k,YELLOW);
putpixel(-y+h,x+k,CYAN);
putpixel(x+h,-y+k,RED);
putpixel(y+h,-x+k,WHITE);
}
void main(){
int x,y,d,r,h,k;
int gd = DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the x and y coordinates of center of a circle:");
scanf("%d %d",&h,&k)
printf("Enter the radius:");
scanf("%d",&r);
// Initialize x and y
x=0;
y=r;
//calculate first decission parameter
d=3-2*r;
//call while loop for calculating all pixel points and position
while(x!=y){
if(d<0){
plot(x,y);
d=d+6+4*x;
x=x+1;
y=y;
}
else{
plot(x,y);
d=d+10+4*x-4*y;
x=x+1;
y=y-1;
}
}
getch();
closegraph();
}