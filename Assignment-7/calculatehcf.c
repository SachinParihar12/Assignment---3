#include <stdio.h>
int main()
{
    int i,x, y;
    printf("Enter two number: ");
    scanf("%d%d", &x, &y);
    int hcf;
    for(i = x>y?x:y; i >= 1; i--)
    {
        if(x % i == 0 && y % i == 0)
        {
            hcf = i;
            break;
        }
    }
    printf("HCF is: %d", hcf);
    return 0;
}
