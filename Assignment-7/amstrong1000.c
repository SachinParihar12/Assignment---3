#include <stdio.h>
int main()
{
	int j,i;
    for(j = 1; j <= 1000; j++)
    {
        int sum;
        for(j = 1; j <= 1000; j++)
        {
            sum = 0;
            for(i = j; i != 0; i /= 10)
            {
                int rem = i % 10;
                sum += rem * rem * rem;
            }
            if (sum == j)
                printf("%d ", j);
        }
    }
    return 0;
}
