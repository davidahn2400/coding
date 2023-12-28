#include <stdio.h>

int main()
{
	int A, B, C = 0; // A, B, C 값을 0으로 초기화

	scanf_s("%d" "%d" "%d", &A, &B, &C); // &포인터로 메모리 주소값 저장

	printf("%d\n", (A + B) % C); // 식을 지정하고 값 출력 후 줄 바꿈
	printf("%d\n", ((A % C) + (B % C)) % C); // 식을 지정하고 값 출력 후 줄 바꿈
	printf("%d\n", (A * B) % C); // 식을 지정하고 값 출력 후 줄 바꿈
	printf("%d", ((A % C) * (B % C)) % C); // 식을 지정하고 값 출력 후
	
	return 0;

}
