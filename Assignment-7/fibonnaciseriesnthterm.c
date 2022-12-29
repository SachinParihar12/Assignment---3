#include<stdio.h>
int main()
{
	int num ,a = 0, b = 1, c = 0;
	printf("int main : num \n");
	scanf("%d",&num);
	int i;
	for(i=2; i<=num; i++)
	{
	  
	  c = a + b;
	  a = b;
	  b = c;
	  }
	
	printf("The %d th fibonnaci number is %d ",num,b);  

	
	return 0;
}
