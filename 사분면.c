#include <stdio.h>

int main()
{
	int x, y = 0; // ������ 0���� �ʱ�ȭ

	scanf_s("%d %d", &x, &y); // &�����ͷ� �޸� �ּҰ� ����
	
	if (x > 0) //  x>0�϶��� if�� ����
		if (y > 0) // x>0�϶��� if�� + y>0�϶��� if��
			printf("1"); 
		else // x>0�϶��� if�� + else(y>0�� �ƴҶ�)
			printf("4");
	if (x < 0) //  x<0�϶��� if�� ����
		if (y > 0) //  x<0�϶��� if�� + y>0�϶��� if��
			printf("2");
		else // x<0�϶��� if�� + else(y>0�� �ƴҶ�)
			printf("3");

	return 0;
}