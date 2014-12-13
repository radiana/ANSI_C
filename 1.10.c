#include<stdio.h>
#include<math.h>
int main(){
	 int a,c,b;
	float s,area;
	printf("enter the value of a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("the area is :%0.3f",area);
	getch();
}
