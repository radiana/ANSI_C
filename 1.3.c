#include<stdio.h>
int main()
{
	
	int row,i,n;
	printf("how many lines:");
	scanf("%d",&n);
	for(row=1;row<=n;row++){
				for(i=row;i<=2*row-1;i++)
		printf("%d\t",i);
			printf("\n");
	}

	getch();
}
