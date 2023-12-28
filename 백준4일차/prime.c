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
		printf("�Ҽ� ����\n");
	}
	else
	{
		printf("�Ҽ� �ƴ�\n");
	}

	return 0;
}