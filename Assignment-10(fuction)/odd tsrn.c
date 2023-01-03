#include <stdio.h>
void print(int n)
{
	int i;
    for(i = 1; i <= n*2; i+=2)
        printf("%d ", i);
}
int main()
{
    int n; 
    printf("Enter the number: "); 
    scanf("%d",&n); 
    print(n); 
    return 0;
}
