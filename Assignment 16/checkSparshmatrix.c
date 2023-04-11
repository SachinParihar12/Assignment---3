#include <stdio.h>
int main()
{
    int row, col, countZeros = 0;
    printf("Enter Row and column of Matrix: ");
    scanf("%d%d", &row, &col);

    int matrix[row][col] ,i,j;
    printf("Enter Element in %d*%d Matrix: \n", row, col);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    // print Matrix
    printf("Given Matrix: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] == 0)
                countZeros++;
        }
        printf("\n");
    }

    // Check Sparsh Matrix
    if (countZeros > ((row * col) - countZeros))
        printf("\nYup!, Given Matrix is Sparse Matrix\nTotal Zeros Contain is : %d", countZeros);
    else
        printf("\nNo!, Given Matrix is Not Sparse Matrix\nTotal Zeros contain is: %d", countZeros);

    return 0;
}
