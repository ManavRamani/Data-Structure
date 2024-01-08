// 3.0 Matrix Print :
#include <stdio.h>
void main()
{
	int i, j, size;

	printf("Enter Size of Array : ");
	scanf("%d", &size);

	int arr[size][size];

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("Enter array[%d][%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\nRow Wise Matrix : \n");

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
