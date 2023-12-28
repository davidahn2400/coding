#include <stdio.h>

int main()
{
	int A, B, T = 0; // 변수를 0으로 초기화
	int t; // 임의의 변수 지정

	scanf_s("%d", &T); // &포인터로 메모리 주소값 저장

	for(t=1;t<=T;t+=1) // t는 1부터 시작하며 t가 T가 될때까지 t는 1씩 증가하는 for문 
	{
		scanf_s("%d %d", &A, &B); // A와 B를 입력
		printf("%d\n", A + B); //  A+B 값을 출력

	}
	
	return 0;
}