#include <stdio.h>
/*
ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����. 
��° �ٿ��� ������ �������� ���еǾ����ִ�. 
��° �ٿ��� ã������ �ϴ� ���� v�� �־�����. 
�Է����� �־����� ������ v�� -100���� ũ�ų� ������, 100���� �۰ų� ����.
*/
int main()
{
	int num, v, count = 0;
	
#define N (100)
	int a[N];

	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &v);
	for (int j = 0; j < num; j++)
	{
		if (v == a[j])
			count++;
	}

	printf("%d", count);

	return 0;

	
}