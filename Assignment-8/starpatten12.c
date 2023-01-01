#include<stdio.h>
int main()
{
	int c='A', i,j;
	for(i=0; i<=3; i++)
	{
		for(j=0,c='A'; j<=7-i; j++)
		{
	
			if(i<=j-1)
			{
			    printf("%c",c);
			   if(j<4)
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
