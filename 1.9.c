#include<stdio.h>

void calsius(){
	float c,f;
	printf("enter the value of f:");
	scanf("%f",&f);
	c=(5*f-160)/9;
	printf("the eql value of c is:%0.3f\n",c);
	
}
void frenhit(){
	float f,c;
		printf("enter the value of c:");
	scanf("%f",&c);
	f=(9*c+160)/5;
	printf("the eql value of f is:%0.3f",f);
}
int main()
{
	calsius();
	frenhit();
	getch();
}
