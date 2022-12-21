#include<stdio.h>
int main()
{
	int a, b , c ;
	printf("Enter is greatest number \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if((a > b &&b > c))
	   printf("num is greatest \n");
	else if((b > a) &&(b > c))
	   printf("num is greatest \n");
	else if((a == b) || (b == c) || (a == c)) 
	   printf("num is greatest repeated \n ");	
	return 0;
}
