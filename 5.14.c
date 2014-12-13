#include<stdio.h>
void prime_number()
{
	int n,i,counter=0;
	for(n=101;n<200;n++){
		counter=0;
		for(i=2;i<n/2;i++)
		{
			if(n%i==0){
				counter++;
	            break;
			}
		}
		if(counter==0)
		printf("%d\n",n);
	}

}
int main()
{
	int n,i,counter=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<n/2;i++){	
	if(n%i==0)
	counter++;
}
if(counter>0&&n!=1)
printf("the number is not prime\n");
else
printf("the number is prime\n");
	printf("\n\n");
prime_number();
getch();
}
