#include <stdio.h>

int main(void)
{
	int n = 1;
	int A = 0;
	int N = 0; // ������ ���������� �ʱ�ȭ

	scanf_s("%d", &A); // &�����ͷ� �޸� �ּҰ� ����

	while (n <= A) // n(1����)�� A�� �ɶ������� while��
	{
		N += n; // N = N + n
		n++; // n �����Լ�
	}

	printf("%d", N); // �������� N�� ���

	return 0;
}