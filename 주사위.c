#include <Stdio.h>

int main()
{
	int a, b, c = 0; // ������ 0���� �ʱ�ȭ

	scanf_s("%d %d %d", &a, &b, &c); // &�����ͷ� �޸� �ּҰ� ����

	if (a == b && a == c) // a�� b�� ���� a�� c�� ���� ����� if��
		printf("%d", 10000 + (a * 1000));

	else if (a == b && a != c) // a�� b�� ���� a�� c�� ���� ���� ����� else if��
		printf("%d", 1000 + (a * 100));
	else if (b == c && b != a) // b�� c�� ���� b�� a�� ���� ���� ����� else if��
		printf("%d", 1000 + (c * 100));
	else if (c == a && c != b) // c�� a�� ���� c�� b�� ���� ���� ����� else if��
		printf("%d", 1000 + (b * 100));

	else // �ֻ��� ���� 3���� ���ų� 2���� ���� ���� ��Ȳ, �� �ֻ��� ���� �� �ٸ� else ��
		if (a > b && a > c) // �ֻ��� ���� a�� ���� ū ����� if��
			printf("%d", a * 100);
		else if (b > c && b > a) // �ֻ��� ���� b�� ���� ū ����� else if��
			printf("%d", b * 100);
		else if (c > a && c > b) // �ֻ��� ���� c�� ���� ū ����� else if��
			printf("%d", c * 100);

	return 0;

}