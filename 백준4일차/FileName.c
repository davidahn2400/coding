#include <stdio.h>

#define N (10) // �迭�� ũ�� 10���� ����

int main(void) {
    int a[N]; // �迭 ������ ���� ����
    int i; // ���� ����

    printf("Enter %d numbers: ", N); // �迭�� ũ�Ⱑ 10���� �����Ǿ����� "Enter 10 numbers: "�� ��µ� ����
    for (i = 0; i < N; ++i) { // i=0���� N���� ������ ���� i ���� �������� //++0
        scanf_s("%d", &a[i]); // a[0]
        printf("i�� : %d\n", i); // i = 0 ���� for�� �ݺ����ڸ���(����ó��) ����
    }

    printf("In reverse order:"); 
    for (i = N - 1; i >= 0; --i) { // i=N-1���� 0 �̻��϶� ���� i ���� ���ҿ���
        printf(" %d", a[i]); // ????
    }
    printf("\n"); // �ٹٲ�

    return 0;
}
