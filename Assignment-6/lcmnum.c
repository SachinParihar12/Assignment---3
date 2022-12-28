#include<stdio.h>
int main()
{
	int x,y,i;
	
	printf("Enter 2 numbers \n");
	scanf("%d %d",&x,&y);
	
	for(i=1; i<=x*y; i++)
	if((i%x == 0) && (i%y == 0)){
	
	   printf("LCM is %d %d %d",x,y,i);
	   break;}

	return 0;
}
