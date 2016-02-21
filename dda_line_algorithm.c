#include<graphics.h>
#include<stdio.h>
#include<math.h>
void main()
{
int i,x1,y1,x2,y2;
float x,y,xinc,yinc;
int steps,diffx,diffy;
int gdriver=DETECT,gmode,gerror;
printf("Enter two points (x,y):");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gdriver,&gmode,"c:\\tc\\bgi:");
diffx = x2-x1;
diffy = y2-y1;
if (diffx > diffy)
   if(diffx<0)
   steps = -diffx;
   else
   steps = diffx;
else
   if(diffy<0)
   steps = -diffy;
   else
   steps = diffy;

xinc = diffx/(float)steps;
yinc = diffy/(float)steps;
if ( diffx > 0)
  x = x1 + xinc;
  else
  x = x2 + xinc;
  if( diffy >0)
  y = y1 + yinc;
  else
  y = y2 + yinc;
for(i=0;i<steps;i++)
{
  x = x + xinc;
  y = y + yinc;
  putpixel(x,y,5);
}
getch();
}

