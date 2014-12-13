#include<stdio.h>
 void find_num(){
	int n;
	for(n=101;n<200;n++){
		if(n%7==0)
		printf("num:%d\n",n);
	
	}
}
int main()
{
	int n,j=0;
	
	for(n=101;n<200;n++){
		if(n%7==0)
		j+=n;	
	}
	printf("sum of all number:%d\n",j);
	find_num();
	getch();
}
