#include<stdio.h>
int main()
{
	int n,i,j=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j*=i;
	}
	printf("factorial of n is:%d",j);
	getch();
}
