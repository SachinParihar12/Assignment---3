#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter Row and column of Matrix: ");
    scanf("%d%d", &row, &col);

    int matrix[row][col], countOnes, findRow = 0, maxOnes = 0,i,j;
    printf("Enter Element in %d*%d Matrix: \n", row, col);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    // print Matrix and find row with max 1
    printf("Given Matrix: \n");
    for(i = 0; i < row; i++)
    {
        countOnes = 0;
        for(j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] == 1)
                countOnes++;
        }
        if (countOnes > maxOnes)
        {
            maxOnes = countOnes;
            findRow = i + 1;
        }

        printf("\n");
    }

    if (findRow > 0)
        printf("\nMax Ones Contain Row is: %d", findRow);
    else
        printf("\nNo, Row Contain 1!");

    return 0;
}
