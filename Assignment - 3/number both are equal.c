#include<stdio.h>
int main()
{
	int num1 , num2;
	
	printf("enter a number1 \n");
	scanf("%d",&num1);
	
	printf("enter a number2 \n");
	scanf("%d",&num2);
	
	if(num1 > num2)
	   printf("number1 is greater \n ");
	else if(num1 == num2) 
	   printf(" both are equal \n");
	else
	   printf(" number2 is greater \n");
	   
	return 0;
}
