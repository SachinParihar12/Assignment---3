#include<stdio.h>
int fact(int n)
{
    int fact = 1,i;
    for(i = 2; i <= n; i++)
        fact *= i;
    return fact;
}
int sumOfTheSeries(int term)
{
    int sum = 0,i;
    for(i = 1; i <= term; i++)
    {
        sum += fact(i) / i;
    }
    return sum;
}
int main()
{
    int term;
    printf("How many terms sum you need: ");
    scanf("%d", &term);
    printf("Sum is: %d", sumOfTheSeries(term));
    return 0;
}
