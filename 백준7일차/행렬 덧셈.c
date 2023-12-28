#include <stdio.h>

int main(void)
{
	int sun, moon, star;

	scanf_s("%d %d", &sun, &moon);

	int arr1[sun][moon];
	int arr2[sun][moon];

	for (int i = 0; i < sun; i++)
	{
		for (int j = 0; j < moon; j++)
		{
			scanf_s("%d", &arr1[i][j]);
		}
	}

	for (int i = 0; i < sun; i++)
	{
		for (int j = 0; j < moon; j++)
		{
			scanf_s("%d", &arr2[i][j]);
		}
	}

	for (int i = 0; i < sun; i++)
	{
		for (int j = 0; j < moon; j++)
		{
			star = arr1[i][j] + arr2[i][j];
			printf("%d ", star);
		}
		printf("\n");
	}

}