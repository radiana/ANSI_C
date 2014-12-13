#include<stdio.h>

int main(){

  int i,j,r;

  printf("Enter the range: ");
  scanf("%d",&r);

  printf("FLOYD'S TRIANGLE\n\n");
  for(i=1;i<=r;i++){
      for(j=1;j<=i;j++)
           printf(" %-2d",i);
      printf("\n");
  }

  return 0;
}


