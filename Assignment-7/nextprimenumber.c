#include <stdio.h>
int main()
{
    int j, n;
    printf("Enter number: ");
    scanf("%d", &n);
    int i = n + 1, flag = 1;
    int nextPrimeNum;
    while (1)
    {
        flag = 1;
        for(i = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("Next Prime num: %d", i);
            break;
        }
        i++;
    }
    return 0;
}

