#include <stdio.h>

int main(void)
{
	int n = 1;
	int A = 0;
	int N = 0; // 임의의 변수값으로 초기화

	scanf_s("%d", &A); // &포인터로 메모리 주소값 저장

	while (n <= A) // n(1에서)이 A가 될때까지의 while문
	{
		N += n; // N = N + n
		n++; // n 증가함수
	}

	printf("%d", N); // 최종적인 N값 출력

	return 0;
}