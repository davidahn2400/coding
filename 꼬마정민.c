#include <stdio.h>
#include <stdint.h>

int main(void)
{
	__int64 A, B, C = 0; // 10^12���� ����ϱ� ���Ͽ� int64�� ���

	scanf_s("%ld %ld %ld", &A, &B, &C); // int64�� ȣȯ�� �ǰ� ��Ʈ���� ����� �� �ֵ��� %ld�� ���

	printf("%ld", A + B + C); // A+B+C�� ���� ���

	return 0;
}