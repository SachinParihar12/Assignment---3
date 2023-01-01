#include<stdio.h>
int main()
{
	int i,j;
	for(i=0; i<=5; i++)
	{
		for(j=0; j<=9-i; j++)
		{
	
			if(i<=j-1)
			  printf("*");
			else
			  printf(" ");
	   }   
		printf("\n");
	}
	
	return 0;
}
