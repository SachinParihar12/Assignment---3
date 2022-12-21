#include<stdio.h>
int main()
{
	char check ='a';
	
	if((check >= 65) && (check <= 90))
	   printf("upper\n");
	else if((check >= 97) && (check <= 122))
	   printf("lower\n");
	
	return 0;   
}
