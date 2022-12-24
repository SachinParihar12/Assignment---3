#include<stdio.h>
int main()
{
	int n;
	printf("Enter the n natura number in reverse order \n");
	scanf("%d",&n);
	int i;
	for(i=n; i>=1; i--)
	  printf("%d \n",i);
	
	return 0;
}
