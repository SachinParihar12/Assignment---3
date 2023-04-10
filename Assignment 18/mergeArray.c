#include <stdio.h>

void mergeArary(int a[], int b[], int merge[], int arrSize)
{
    for(i = 0; i < arrSize; i++;)
    {
        merge[i] = a[i];
        merge[arrSize + i] = b[i];
    }
}
int main()
{
    int arrSize ,i;
    printf("How many numbers you want to enter(both Array): ");
    scanf("%d", &arrSize);

    int a[arrSize], b[arrSize];

    printf("Enter %d Numbers in First Array\n", arrSize);
    for(i = 0; i < arrSize; i++)
        scanf("%d", &a[i]);

    printf("Enter %d Numbers in Second Array\n", arrSize);
    for(i = 0; i < arrSize; i++)
        scanf("%d", &b[i]);

    int merge[arrSize * 2]; 

    mergeArary(a, b, merge, arrSize);

    printf("\nAfter Merging: ");
    for(i = 0; i < arrSize * 2; i++)
        printf("%d ", merge[i]);

    return 0;
}
