#include <stdio.h>

int main()
{
	int a[30] = { 0 };
	int student = 0;

	for (int i = 0; i < 28; i++)
	{
		scanf_s("%d", &student);
		a[student-1]++;
	}

	for (int j = 0; j < 30; j++)
	{
		if (a[j] == 0)
			printf("%d\n", j+1);
	}
	return 0;
}