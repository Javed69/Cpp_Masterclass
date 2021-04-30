#include<conio.h>
#include<math.h>
#include<graphics.h>

void dda(int x1,int y1,int x2,int y2);

void main()
{
	int gd  = DETECT,gm;
	int x1,y1,x2,y2;
	
	initgraph(&gd,&gm,"c:\\tcplus\\bgi");
	
	clrscr();
	
	printf("DDA Line generation algorithm");
	printf("\n Enter the starting co-ordinate for drawing line");
	scanf("%d %d",&x1,&y1);
	printf("\n Enter the ending co-ordinates");
	scanf("%d %d",&x2,&y2);
	dda(,x1,y1,x2,y2);
	
	getch();
	closegraph();
}

void dda(int x1,int y1,int x2,int y2)
{
	int i,dx,dy,steps;
	float x,y;
	float xinc,yinc;
	dx = (x2-x1);
	dy = (y2-y1);

	/* decide whether to move along x-direction*/
	if(abs(dx)>=abs(dy))
	steps = dx;
	else
	steps = dy;
	
	/* calculate the increment value for x & y*/
	xinc = (float) dx/steps;
	yinc = (float) dy/steps;
	
	x = x1;
	y = y1;
	
	/* plot the first point*/
	putpixel(x,y,WHITE);
	for(i=1;i<steps;i++)
	{
		x = x + xinc;
		y = y + yinc;
		
		/* convert the floating value to its nearest integer value.i.e. same as use of floor or ceil function */
		x1 = x + 0.5;
		y1 = y + 0.5;
		
		putpixel(x1,y1,WHITE);
	}
}
