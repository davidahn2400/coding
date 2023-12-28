#include <stdio.h>
/*
첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 
둘째 줄에는 정수가 공백으로 구분되어져있다. 
셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 
입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.
*/
int main()
{
	int num, v, count = 0;
	
#define N (100)
	int a[N];

	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &v);
	for (int j = 0; j < num; j++)
	{
		if (v == a[j])
			count++;
	}

	printf("%d", count);

	return 0;

	
}