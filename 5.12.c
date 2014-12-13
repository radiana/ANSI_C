#include<stdio.h>
int main()
{
	float charge,wechrg;
	int unit;
	printf("enter the number of units:");
	while(scanf("%d",&unit)==1){
	
	if(unit<=200){
			charge=100+unit*0.80;
	printf("charage is :%0.3f",charge);
	}
	if(unit>200&&unit<=300){
		charge=100+unit*0.90;
	printf("charage is :%0.3f",charge);
	}
	if(unit>300){
		charge=100+unit*1.00;
		wechrg=charge+(charge*0.15);
	printf("charage is :%0.3f",wechrg); 
	}
}
	getch();
}
