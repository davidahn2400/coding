#include <stdio.h>
#include <stdint.h>

int main(void)
{
	__int64 A, B, C = 0; // 10^12까지 출력하기 위하여 int64를 사용

	scanf_s("%ld %ld %ld", &A, &B, &C); // int64와 호환이 되게 비트수를 출력할 수 있도록 %ld를 사용

	printf("%ld", A + B + C); // A+B+C의 값을 출력

	return 0;
}
