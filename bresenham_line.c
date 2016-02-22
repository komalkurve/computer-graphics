#include<stdio.h>
#include<graphics.h>
void main()
{
int dx,dy,min,max;
int x,i,j,z,e,x2,x1,y1,y2;
int gdriver=DETECT,gmode,gerror;
printf("Enter two points (x,y):");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&gdriver,&gmode,"c:\\tc\\bgi:");
dx= x2-x1;
dy = y2-y1;
if(x1>x2)
{
  max=x1;
  min=x2;
  dx = -dx;
  dy = -dy;
  j = y2;
  z = y1;
  putpixel(x2,y2,4);
}
else
{
max = x2;
min = x1;
j = y1;
z = y2;
putpixel(x1,y1,4);
}
x = min;
e = 2*dy - dx;
if(min!=max)
{
for(i=min;x<=max;)
{
  if(e<0)
     {
      putpixel(x+1,j,4);
     }
  else
    {
    putpixel(x+1,j+1,4);
    j = j+1;
   }
   e = e + 2 *dy - 2*dx;   
      x = x +1;
    i = 4 *dx -4;
}
}
else
{
for(i=j;j<=z;)
{
  if(e<0)
     {
      putpixel(x,j,4);
     }
  else
    {
    putpixel(x,j+1,4);
    j = j+1;
   }
   e = e + 2 *dy - 2*dx;   
} 
}
getch();

}

