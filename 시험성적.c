#include <stdio.h>

int main()
{
	int Score = 0; // ������ 0���� �ʱ�ȭ

	scanf_s("%d", &Score); // &�����ͷ� �޸� �ּҰ� ����

	if (Score >= 90) // ù��°��, 90�� �̻��� ��쿡�� A�� ����
		printf("A");

	else if (Score >= 80) // 90�� �̻��� �ƴ� ��� + 80�� �̻��� ��� B�� ����
		printf("B");

	else if (Score >= 70) // 80�� �̻��� �ƴ� ��� + 70�� �̻��� ��� C�� ����
		printf("C");

	else if (Score >= 60) // 70�� �̻��� �ƴ� ��� + 60�� �̻��� ��� D�� ����
		printf("D");

	else // 60�� �̻��� �ƴ� ��� F�� ����
		printf("F");

	return 0;
}