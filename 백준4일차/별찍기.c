#include <stdio.h>

int main()
{
	int star = 0; // �� ������ �ʱ�ȭ

	scanf_s("%d", &star); // �� ���� ����
	
	for (int i = 1; i <= star; i++) // �� ����� ����ϴ���
	{
		for (int j = 1; j <= i; j++) // �� ������ ����ϴ���
			printf("*"); // ���� ��
		printf("\n"); // �ٹٲ�
	}
	
	
	return 0;
}