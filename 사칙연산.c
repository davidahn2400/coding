#include <stdio.h>

int main(void)
{
	int A = 0;
	int B = 0;

	scanf_s("%d", &A);
	scanf_s("%d", &B);

	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d", A % B);

	return 0;
}