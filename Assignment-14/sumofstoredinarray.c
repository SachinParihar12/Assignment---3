#include<stdio.h>
int main()
{
	int arr[10],i;
	int sum = 0;
	printf("Enter the 10 number \n");
	
	for(i=0 ;i<10 ;i++)
	{
		printf("Enter the %d number \n",i+1);
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	
	printf("%d",sum);
	
	
	return 0;
	
}
