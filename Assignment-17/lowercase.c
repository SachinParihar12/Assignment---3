#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],i;
    printf("Enter String: ");
    fgets(str, 100, stdin);

    for(i= 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

    printf("Convert string in lowercase: %s", str);
    
    return 0;
}

