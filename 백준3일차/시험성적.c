#include <stdio.h>

int main()
{
	int Score = 0; // 변수를 0으로 초기화

	scanf_s("%d", &Score); // &포인터로 메모리 주소값 저장

	if (Score >= 90) // 첫번째로, 90점 이상인 경우에는 A로 지정
		printf("A");

	else if (Score >= 80) // 90점 이상이 아닐 경우 + 80점 이상일 경우 B로 지정
		printf("B");

	else if (Score >= 70) // 80점 이상이 아닐 경우 + 70점 이상일 경우 C로 지정
		printf("C");

	else if (Score >= 60) // 70점 이상이 아닐 경우 + 60점 이상일 경우 D로 지정
		printf("D");

	else // 60점 이상이 아닐 경우 F로 지정
		printf("F");

	return 0;
}
