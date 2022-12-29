#include <stdio.h>
int main()
{
    int n ,i;
    printf("Enter Number: ");
    scanf("%d", &n);
    int x = 0, y = 1;
    int sum = 0, flag = 0;
    if (n == 0 || n == 1)
        flag = 1;
    else
    
        for( i = 3; i <= n; i++)
        
            sum = x + y;
            x = y;
            y = sum;
            if (n == sum)
			
            
                flag = 1;
           
    if(flag)
        printf("yes present ");
    else
        printf("not present ");
    return 0;
}
