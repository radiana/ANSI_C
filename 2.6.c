#include<stdio.h>
int main()
{
	int p=0,n=0,m;
	printf("enter the set of number:");
	while(scanf("%d",&m)&&m){
		if(m>0)
		p++;
		else if(m<0)
		n++;
	}
	printf("positive :%d negative:%d",p,n);
	getch();
}
