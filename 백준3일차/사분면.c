#include <stdio.h>

int main()
{
	int x, y = 0; // 변수를 0으로 초기화

	scanf_s("%d %d", &x, &y); // &포인터로 메모리 주소값 저장
	
	if (x > 0) //  x>0일때의 if문 설정
		if (y > 0) // x>0일때의 if문 + y>0일때의 if문
			printf("1"); 
		else // x>0일때의 if문 + else(y>0이 아닐때)
			printf("4");
	if (x < 0) //  x<0일때의 if문 설정
		if (y > 0) //  x<0일때의 if문 + y>0일때의 if문
			printf("2");
		else // x<0일때의 if문 + else(y>0이 아닐때)
			printf("3");

	return 0;
}
