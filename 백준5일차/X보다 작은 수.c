#include <stdio.h>

int main()
{
	int count, num  = 0;

	scanf_s("%d %d", &count, &num);

#define N (10000)
	int a[N];

	for (int i = 0; i < count; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (int j = 0; j < count; j++)
	{
		if (a[j] < num)
		{
			printf("%d ", a[j]);
		}
		else
			printf("");
	}

	return 0;

}