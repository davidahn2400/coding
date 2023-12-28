#include <stdio.h>

int main()
{
	int year = 0; // 변수를 0으로 초기화

	scanf_s("%d", &year); // &포인터로 메모리 주소값 저장

	if (year % 4 == 0) // year이 4로 나눴을때 나머지가 0일때 if문 설정
		if (year % 100 == 0) // year이 4로 나눴을때 나머지가 0일때 if문 + year이 100으로 나눴을대 나머지가 0일때 if문
			if (year % 400 == 0) // year이 4로 나눴을때 나머지가 0일때 if문 + year이 100으로 나눴을대 나머지가 0일때 if문 
				// + year이 400으로 나눴을때 나머지가 0일때 if문
				printf("1"); // 1로 출력(400으로 나눴을 때 0인 경우)
			else
				printf("0"); // 0으로 출력(100으로 나눴을때 0인 경우)
		else
			printf("1"); // 1로 출력(4로 나눴을때 0인 경우)

	else 
		printf("0"); // 0으로 출력(4로 나눴을때 0이 아닌 경우)

	return 0;

}
