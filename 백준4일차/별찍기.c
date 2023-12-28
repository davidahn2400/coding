#include <stdio.h>

int main()
{
	int star = 0; // 별 변수값 초기화

	scanf_s("%d", &star); // 별 갯수 지정
	
	for (int i = 1; i <= star; i++) // 몇 행까지 출력하는지
	{
		for (int j = 1; j <= i; j++) // 몇 개까지 출력하는지
			printf("*"); // 찍어내는 별
		printf("\n"); // 줄바꿈
	}
	
	
	return 0;
}