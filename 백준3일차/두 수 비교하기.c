#include <stdio.h>

int main()
{
	int A, B = 0; // 변수를 0으로 초기화

	scanf_s("%d %d", &A, &B); // &포인터로 메모리 주소값 저장

	if (A > B)
		printf(">");

	if (A < B)
		printf("<");

	if (A == B)
		printf("==");

	return 0;
}
