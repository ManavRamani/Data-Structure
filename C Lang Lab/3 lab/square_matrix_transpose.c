// 3.3 WAP to find Transpose of square matrix. [C]

#include <stdio.h>

void main()
{
    int size;

    printf("Enter size of Matrix : ");
    scanf("%d", &size);

    int matrix[size][size];
    int transpose[size][size];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}
