#include <stdio.h>

int main()
{
	int a[9];
	int b;

	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &a[i]);
	}
	int max = a[0];
	for (int j = 0; j < 9; j++)
	{
		if (a[j] > max)
		{
			max = a[j];
			b = j + 1;
		}
	}
	printf("%d\n%d", max, b);
}