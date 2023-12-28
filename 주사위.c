#include <Stdio.h>

int main()
{
	int a, b, c = 0; // 변수를 0으로 초기화

	scanf_s("%d %d %d", &a, &b, &c); // &포인터로 메모리 주소값 저장

	if (a == b && a == c) // a가 b와 같고 a와 c가 같을 경우의 if문
		printf("%d", 10000 + (a * 1000));

	else if (a == b && a != c) // a가 b와 같고 a와 c가 같지 않을 경우의 else if문
		printf("%d", 1000 + (a * 100));
	else if (b == c && b != a) // b와 c가 같고 b와 a가 같지 않을 경우의 else if문
		printf("%d", 1000 + (c * 100));
	else if (c == a && c != b) // c와 a가 같고 c와 b가 같지 않을 경우의 else if문
		printf("%d", 1000 + (b * 100));

	else // 주사위 눈이 3개가 같거나 2개가 같지 않은 상황, 즉 주사위 눈이 다 다른 else 문
		if (a > b && a > c) // 주사위 눈이 a가 가장 큰 경우의 if문
			printf("%d", a * 100);
		else if (b > c && b > a) // 주사위 눈이 b가 가장 큰 경우의 else if문
			printf("%d", b * 100);
		else if (c > a && c > b) // 주사위 눈이 c가 가장 큰 경우의 else if문
			printf("%d", c * 100);

	return 0;

}