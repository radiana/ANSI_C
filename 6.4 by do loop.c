#include<stdio.h>
int main()
{
int i=1,j=1,k=2,r,f;
printf("enter the range");
scanf("%d",&r);
printf("The Fibonacci series\n");
printf("%d %d",i,j);
do
{
	f=i+j;
	i=j;
	j=f;
	printf(" %d",f);
	k++;
}
while(k<r);
getch();
}
