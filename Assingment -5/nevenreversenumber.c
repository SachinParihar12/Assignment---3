#include<stdio.h>
int main()
{
	int n;
	printf("Enter the even natural reverse number \n");
	scanf("%d",&n);
	int i;
	for(i=n; i>=1; i-=2)
	 printf("%d \n",i);
	
	return 0;
}
