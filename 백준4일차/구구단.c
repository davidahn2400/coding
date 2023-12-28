#include <stdio.h>

int main()
{
	int n = 0; 
	int num = 1; // 임의의 변수 지정

	scanf_s("%d", &n); // &포인터로 메모리 주소값 저장
	
	while (num <= 9) // num이 1에서 9가 될때까지의 while문
	{
		printf("%d * %d = %d\n", n, num, n * num); // "n * num = n * num" 이라는 구구단 형식의 식 출력
		num++; // num 증가함수
	}

	return 0;
}