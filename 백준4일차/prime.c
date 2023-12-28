#include <stdbool.h>
#include <stdio.h>

bool prime(int num)
{
	int divisor;

	if (num <= 1)
	{
		return false;
	}

	for (divisor = 2; divisor * divisor <= num; ++divisor)
	{
		if (num % divisor == 0)
		{
			return false;
		}
	}

	return true;
}

int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf_s("%d", &num);

	if (prime(num))
	{
		printf("소수 맞음\n");
	}
	else
	{
		printf("소수 아님\n");
	}

	return 0;
}