#include <stdio.h>

void rotateArray(int arr[], int arrSize, int n, int d)
{
    int brr[arrSize],i,j;
    for(i = 0; i < arrSize; i++)
        brr[i] = arr[i];
    if (d == 0) 
    {
        for(i = 0, j = n; i < arrSize; i++)
            arr[i] = brr[j++ % arrSize];
    }
    else 
    {
        for(i = 0, j = arrSize-n; i < arrSize; i++)
            arr[i] = brr[j++ % arrSize];
    }
}

int main()
{
    int arrSize, n, d ,i;
    printf("Enter the number: ");
    scanf("%d", &arrSize);
    int arr[arrSize];
    printf("Enter %d Element in Array\n", arrSize);
    for(i = 0; i < arrSize; i++)
        scanf("%d", &arr[i]);

    printf("Enter Position and direction ");
    scanf("%d%d", &n, &d);

    printf("\nBefore Rotate Array: ");
    for(i = 0; i < arrSize; i++)
        printf("%d ", arr[i]);

    rotateArray(arr, arrSize, n, d);

    printf("\nAfter Rotate Array by %d Position: ");
    for(i = 0; i < arrSize; i++)
        printf("%d ", arr[i]);

    return 0;
}
