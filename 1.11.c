#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float distance;
	printf("enter the value of x1,x2,y1,y2:\n");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("the value of distance is:%0.3f",distance);
	getch();
	
}
