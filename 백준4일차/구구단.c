#include <stdio.h>

int main()
{
	int n = 0; 
	int num = 1; // ������ ���� ����

	scanf_s("%d", &n); // &�����ͷ� �޸� �ּҰ� ����
	
	while (num <= 9) // num�� 1���� 9�� �ɶ������� while��
	{
		printf("%d * %d = %d\n", n, num, n * num); // "n * num = n * num" �̶�� ������ ������ �� ���
		num++; // num �����Լ�
	}

	return 0;
}