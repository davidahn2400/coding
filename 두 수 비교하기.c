#include <stdio.h>

int main()
{
	int A, B = 0; // ������ 0���� �ʱ�ȭ

	scanf_s("%d %d", &A, &B); // &�����ͷ� �޸� �ּҰ� ����

	if (A > B)
		printf(">");

	if (A < B)
		printf("<");

	if (A == B)
		printf("==");

	return 0;
}