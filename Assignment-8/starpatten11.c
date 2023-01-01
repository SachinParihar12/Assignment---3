#include<stdio.h>
int main()
{
	int c ='A', i,j;
	for(i=0,c='A'; i<=5; i++)
	{
		for(j=0; j<=4+i; j++)
		 {
		 	if(4-i <= j)
		 	 printf("%c",c);
		 	else
		 	 printf(" ");
		 }
		 printf("\n");
		 
	}
	
	return 0;
}
