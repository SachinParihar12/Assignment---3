#include<stdio.h>
int main()
{
	int month_number;
	
	printf("Enter month number \n");
	scanf("%d",&month_number);
	
	if((month_number ==1) || (month_number ==3) || (month_number ==5) ||(month_number ==7) ||(month_number ==9) ||(month_number ==12)
	  printf("month has 31 days \n");
	else if(month_number ==2)
	  printf("month has 28/29 days \n");
	else
	  printf("month has 30 days \n");
	return 0;
}
