#include <stdio.h>

int main()
{
	int A, B, T = 0; // ������ 0���� �ʱ�ȭ
	int t; // ������ ���� ����

	scanf_s("%d", &T); // &�����ͷ� �޸� �ּҰ� ����

	for(t=1;t<=T;t+=1) // t�� 1���� �����ϸ� t�� T�� �ɶ����� t�� 1�� �����ϴ� for�� 
	{
		scanf_s("%d %d", &A, &B); // A�� B�� �Է�
		printf("%d\n", A + B); //  A+B ���� ���

	}
	
	return 0;
}