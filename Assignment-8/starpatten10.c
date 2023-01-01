#include<stdio.h>
int main()	
{ 
	int i,j;
	for(i=1; i<=4; i++) {
		int row = 1; 
		int flag = 1; 
		for(j=1; j<=5-1; j++) {
			if(j<=5-i || j>=3+i)  { 
				if(flag==1) 
					printf("%d ",row++);				
				else
					printf("%d ",--row);				
			}
			else  {
				printf("  ");
				flag = 0;
			}
		}
		printf("\n"); 
	}	
	return 0;
}
