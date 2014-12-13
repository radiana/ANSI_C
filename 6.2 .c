#include<stdio.h>
#define colmax 10
#define rowmax 12

int main()
{
	int row,column,y;
	row=1;
	printf("    \t  MULTIPLICATION TABLE    \n");
	printf("  --------------------------------------\n");
	do
	{
		column=1;
		do
		{
			y=row*column;
			printf("%4d",y);
			column+=1;
		}
		while(column<=colmax);
		printf("\n");
		row+=1;
		
	}
	while(row<=rowmax);
	printf("  ---------------------------------------\n");
	
	getch();
}
