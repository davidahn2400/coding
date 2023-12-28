#include <stdio.h>

double point(double left, double right)
{
	return(left + right) / 2;
}

int main(void)
{
	double x, y, z;

	printf("숫자 세 개를 입력하세요 : ");
	scanf_s("%lf %lf %lf", &x, &y, &z);
	printf("%g와 %g의 평균 : %g\n", x, y, point(x, y));
	printf("%g와 %g의 평균 : %g\n", y, z, point(y, z));
	printf("%g와 %g의 평균 : %g\n", z, x, point(z, x));

	return 0;
}