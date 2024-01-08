// 3.2 Array of Multiplication :
#include <stdio.h>
void main()
{
	int i, j, row1, size, col1, k;

	printf("Enter Array of A - Row : ");
	scanf("%d", &row1);

	printf("Enter Array of Size : ");
	scanf("%d", &size);

	printf("Enter Array of B - Column : ");
	scanf("%d", &col1);

	int arr[row1][size];
	int arr2[size][col1];
	int mul[row1][col1];

	printf("First Array : \n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("Enter array[%d][%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("2nd Array : \n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < col1; j++)
		{
			printf("Enter array[%d][%d] : ", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}

	printf("\n----------------------------\nRow Wise Matrix : \n");

	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n 2nd :\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < col1; j++)
		{
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}

	printf("\n----------------------------\n Multiplication Matrix :");

	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			mul[i][j] = 0;
			for (k = 0; k < size; k++)
			{
				mul[i][j] += arr[i][k] * arr2[k][j];
			}
		}
		printf("\n");
	}

	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			printf("%d\t", mul[i][j]);
		}
		printf("\n");
	}
}
