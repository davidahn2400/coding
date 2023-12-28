#include <stdio.h>

int main()
{
	int star = 0;

	scanf_s("%d", &star);

	for (int i = 1; i <= star; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}