#include<stdio.h>
#include<graphics.h>
void main()
{
int dx,dy,min,max;
int i,j,e,x2,x1,y1,y2;
int gdriver=DETECT,gmode,gerror;
printf("Enter two points (x,y):");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gdriver,&gmode,"c:\\tc\\bgi:");
dx= x2-x1;
dy = y2-y1;
if(dx!=0)
{
if(dx<0)
  {
  dx = -dx;
  dy = -dy;
  j = y2;
  }
else
j = y1;
e = dy-dx;
if(x1<x2)
  { min=x1;
    max = x2;
  }
else
 {
   min = x2;
   max = x1;
 }
for(i = min;i<=max-1;)
 {
  putpixel(i,j,4);
  if(e>=0)
    {
    j = j+1;
   e = e -dx;
   }
  i = i+1;
   e= e+ dy;
 }
}

else
{
if(dy<0)
  {
  dy = -dy;
  j = y2;
  }
else
j = y1;
e = dy-dx;
if(y1<y2)
  { min=y1;
    max = y2;
  }
else
 {
   min = y2;
   max = y1;
 }
for(i = min;i<=max-1;)
 {
  putpixel(x1,j,4);
  if(e>=0)
    {
    j = j+1;
   e = e -dx;
   }
  i = i+1;
   e= e+ dy;
 }

}
getch();

}
