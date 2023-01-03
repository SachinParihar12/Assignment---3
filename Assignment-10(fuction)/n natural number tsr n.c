#include <stdio.h>
void print(int n)
{
	int i;
    for(i = 0; i <= n; i++)
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
