#include<stdio.h>
int main()
{
	int number;
	printf("enter the number \n");
	scanf("%d",&number);
	
	if((number % 5)== 0)
	  printf("number is divisible \n");
	else
	  printf("enter is not divisible \n");
	  
	return 0;
}
