#include<stdio.h>
int main()
{
	int c = 1, i,j;
	for(i=0; i<=3; i++)
	{
		
		for(j=0, c = 1;  j<=3+i; j++)
		
		{
			if(3-i <=j)
			{
			
			  printf("%d",c);
			  if(j < 3)
			   c++;
			 else
			   c--; 
		   }
		   else
		     printf(" ");
		    
		}
		
		printf("\n");  
	}
	
	return 0;
}
