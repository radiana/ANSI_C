#include<stdio.h>
int main()
{
int i=1,j=1,k,r,f;
printf("enter the range");
scanf("%d",&r);
printf("The Fibonacci series\n");
printf("%d%d",i,j);
for(k=2;k<r;k++)
{
	f=i+j;
	i=j;
	j=f;
	printf("%d",f);
	
}
getch();
}
