#include<stdio.h>
int main()
{
	int a,b,c;
	printf("a=orthographic,b=base,c=hypotenuse\n");
	printf("enter the value of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
	
	
	if((c*c)==(a*a)+(b*b))
	printf("a,b,c is the sides of ri8 angeled triangl");
	else
	printf("the are not sides of ri8 angled triangl");

	getch();
}
