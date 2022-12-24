#include<stdio.h>
int main()
{
	int n;
	printf("Enter the n table \n");
	scanf("%d",&n);
	int i;
	for(i=1; i<=10; i++)
	  printf("%d \n",i*n);
	return 0;
}
