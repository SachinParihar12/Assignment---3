#include <stdio.h>
int main()
{
    int var;
    printf("Enter the value of var: ");
    scanf("%d", &var);
    switch (var)
    {
    case 1:
        printf("Good!");
        break;
    case 2:
        printf("Better!");
        break;
    case 3:
        printf("Best!");
        break;
    default:
        printf("Invalid!");
    }
    return 0;
}
