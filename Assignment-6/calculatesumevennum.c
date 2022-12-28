#include<stdio.h>
int main()
{
	int n ,i;
	printf("Enter the sum even number \n");
	scanf("%d",&n);
	int sum = 0;
	for(i=2; i<=2*n; i+=2)
	   sum+=i;
	printf("%d even number sum is %d\n",n,sum);
	
	return 0;
}
