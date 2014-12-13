#include<stdio.h>
int main()
{
	int a,b,c;
	float x;
	scanf("%d %d %d",&a,&b,&c);
	if((b-c)==0){
		printf("the value is undifined");
		return 0;
	}
	else 
	x=a/(b-c);
	printf("the value of x is :%0.3f",x);
	getch();
	
}
