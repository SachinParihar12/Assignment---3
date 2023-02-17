#include <stdio.h>
int main()
{
    char str[100],i,j;
    printf("Enter String: ");
    fgets(str, 100, stdin);
    
    for(i = 0; str[i]; i++)
    {
        for(j = 0; str[j]; j++)
        {
            if (str[i] < str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    int count, i = 0, j;
    while (str[i])
    {
        count = 0;
        for(j = i; str[j]; j++)
        {
            if (str[i] == str[j])
                count++;
            else
                break;
        }
        printf("\n%c Character Frequency is: %d", str[i], count);
        i = j;
    }

    return 0;
}
