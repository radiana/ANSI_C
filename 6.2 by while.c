#include<stdio.h>
int main()
{
	int row=1,col,y;
	printf("         MULTIPLICATION TABLE\n");
	printf("--------------------------------------\n");
	while(row<=12){
		col=1;
		while(col<=10){
			y=row*col;
			printf("%4d",y); 
			col++;
		}
		printf("\n");
	row++;
			
	}
	getch();
}
