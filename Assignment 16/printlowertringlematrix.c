#include <stdio.h>
int main()
{
    int row;
    printf("Enter Row of Matrix: ");
    scanf("%d", &row);

    int matrix[row][row],i,j;
    printf("Enter Element in %d*%d Matrix: \n", row, row);
    for(i = 0; i < row; i++)
        for(j = 0; j < row; j++)
            scanf("%d", &matrix[i][j]);

    // print Matrix
    printf("Given Matrix: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < row; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    // print Lower triangular Matrix
    printf("lower triangular Matrix: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j <= i; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
