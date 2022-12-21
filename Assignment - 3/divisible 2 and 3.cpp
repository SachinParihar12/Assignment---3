#include<stdio.h>
int main()
{
	int number;
	
	printf("Enter number \n");
	scanf("%d",&number);
	
	if((number % 3 == 0) && (number % 2 == 0))
	   printf("number is divisible by both 3 and 2 \n");
	else
	   printf("not divisible\n");
	   
	return 0;
}
