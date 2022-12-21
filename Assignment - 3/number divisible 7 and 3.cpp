#include<stdio.h>
int main()
{
	
	int number;
	
	printf("Enter number \n");
	scanf("%d",&number);
	
	if((number % 7 == 0) && (number % 3 == 0))
	   printf("number is divisible by both 7 and 3 \n");
	else
	   printf("not divisible\n");
	   
	return 0;
	
	
	
}
