// 3.1. sub of 2 Matrix :
#include <stdio.h>
void main()
{
	int i, j, size;
	printf("Enter Array of size : ");
	scanf("%d", &size);

	int a[size][size], b[size][size], sum[size][size], sub[i][j];

	printf("\nEnter Array of A values: \n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("Enter a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter Array of B values: \n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("Enter b[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nSum of Two Matrix : \n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("\nSub of Two Matrix : \n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
}
