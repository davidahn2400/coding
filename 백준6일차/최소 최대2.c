#include <stdio.h>

int main(void)
{
	int num;

	scanf_s("%d", &num);


	int a[num];

	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &a[i]);
	}

	int min = a[0], max = a[0];
	for (int j = 0; j < num; j++)
	{
		if (a[j] < min)
			min = a[j];
		if (a[j] > max)
			max = a[j];
	}
	printf("%d %d", min, max);

	return 0;

}