#include <stdio.h>
int main()
{
    int row, rightDiagoSum=0;
    printf("Enter Row of Matrix: ");
    scanf("%d", &row);

    int matrix[row][row] ,i,j;
    printf("Enter Element in %d*%d Matrix: \n", row, row);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < row; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (i == j)
                rightDiagoSum += matrix[i][j];
        }
    }

    // print Matrix
    printf("Given Matrix: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < row; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    // right Diagonalls sum
    printf("Right Diagonals of Matrix Sum is: %d\n", rightDiagoSum);
    return 0;
}
