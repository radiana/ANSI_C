#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,sum,num;
	printf("enter a integer number:");
	scanf("%d",&num);
	a=num%10;
	b=num/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	sum=a+c+e+f;
	printf("the sum of 4 digits:%d",sum);
	getch();
	
}
