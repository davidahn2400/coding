#include <stdio.h>

void count(int num)
{
	printf("T ���� %d, ������\n", num);
}
int main(void)
{
	int i;
	for (i = 10; i > 0; --i)
	{
		count(i);
	}

	return 0;

}