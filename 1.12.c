#include<stdio.h>
#include<conio.h>
int main()
{
	int x1,y1,x2,y2;
	float perimeter,area,r,pi=3.1416;
	printf("enter the value of x1,y1,x2,y2\n");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	r=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	perimeter=2*pi*r;
	area=pi*r*r;
	printf("the perimeter of circle is %0.3f and the area is %0.3f",perimeter,area);
	getch();
	
}
