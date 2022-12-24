#include<stdio.h>
int main()
{
	int n;
	printf("Enter the n odd natural number \n");
	scanf("%d",&n);
	int i;
	for(i=1; i<=n; i+=2)
	  printf("%d \n",i);
	
	return 0;
}
