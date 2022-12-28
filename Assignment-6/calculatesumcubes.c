#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of cubes \n");
	scanf("%d",&n);
	int sum =0;
	for(i=1; i<=n; i++)
	   sum+=i*i*i;
	printf("%d number of cubes is %d \n",n,sum);
	
	return 0;
}
