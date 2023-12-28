#include <stdio.h>

int main()

{
	int sun; // 변수 지정

	scanf_s("%d", &sun); // 변수 입력

	for (int i = 1; i <= sun; i++) // i는 1부터 입력한 변수 이하가 될때까지 i 증감함수
	{
		for (int j = 1; j <= (sun - i); j++) // i는 1부터 입력한 변수 이하가 될때까지 i 증감함수 + j는 sun - 1 이하가 될때까지 j 증감함수
			printf(" "); // sun - i 만큼 띄어쓰기 공백을 출력
		for (int s = 1; s <= i; s++) // s는 1부터 i(입력한 변수 이하)이하가 될 때까지 s 증감함수
			printf("*"); // 입력한 변수 만큼 * 출력 
		printf("\n"); // 한줄씩 줄바꿈
	}
}