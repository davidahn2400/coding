#include <stdio.h>

double point(double left, double right)
{
	return(left + right) / 2;
}

int main(void)
{
	double x, y, z;

	printf("���� �� ���� �Է��ϼ��� : ");
	scanf_s("%lf %lf %lf", &x, &y, &z);
	printf("%g�� %g�� ��� : %g\n", x, y, point(x, y));
	printf("%g�� %g�� ��� : %g\n", y, z, point(y, z));
	printf("%g�� %g�� ��� : %g\n", z, x, point(z, x));

	return 0;
}