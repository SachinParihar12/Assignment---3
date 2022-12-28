#include<stdio.h>
int main()
{
	int n ,i;
	
	printf("Enter the sum natural number \n");
	scanf("%d",&n);
	int sum = 0;
	for(i = 1; i <= n; i++)
	    sum += i;
	printf(" sum is %d\n",sum);
	return 0;
}
