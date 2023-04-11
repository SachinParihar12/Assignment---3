#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter Row and Column of Matrix: ");
    scanf("%d%d", &row, &col);

    int matrix[row][col],i,j;
    printf("Enter Element in %d*%d Matrix: \n", row, col);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    // print Matrix
    printf("Given Matrix: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    // find Transpose, here we only find Transpose not assign according to question
    printf("Transpose of Matrix: \n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
            printf("%d ", matrix[j][i]);
        printf("\n");
    }

    return 0;
}
