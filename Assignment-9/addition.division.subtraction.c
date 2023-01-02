#include<stdio.h>
int main()
{
	int choice,x,y,z;
	
	while(1)
	{
	
	printf("1.Addition\n");
	printf("2.subtraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	printf("5.Exit\n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("Enter 2 number");
			scanf("%d %d",&x,&y);
			z = x+y;
			printf(" Addition = %d",z);
		      break;
	    
		case 2:
			printf("Enter 2 number");
			scanf("%d %d",&x,&y);
			z = x-y;
			printf(" subtraction = %d",z);
		      break;
		case 3:
			printf("Enter 2 number");
			scanf("%d %d",&x,&y);
			z = x*y;
			printf(" multiplication = %d",z);
		      break;	
		case 4:
			printf("Enter 2 number");
			scanf("%d %d",&x,&y);
			z = x%y;
			printf(" division = %d",z);
		      break;
		case 5:
			return 0;
			break;
	
	
	    }	    
	}
	
	return 0;
}
