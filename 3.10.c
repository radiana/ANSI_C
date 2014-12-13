#include<stdio.h>
#include<math.h>
int main()
{
	float l,r;
	float c,f;
	printf("enter the value of l,r:\n");
	scanf("%f %f",&l,&r);
	for(c=0.01;c<=0.1;c+=0.01){
		f=sqrt(1/(l*c)-(r*r)/(4*(c*c)));
		printf("f:%0.3f",f);
		printf("\n");
	}
	
	getch();
}
