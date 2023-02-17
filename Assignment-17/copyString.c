#include <stdio.h>
int main()
{
    char str[100], copyString[100],i;
    printf("Enter string: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i]; i++)
        copyString[i] = str[i];

    printf("\nCopy string: %s", copyString);

    
    return 0;
}   

