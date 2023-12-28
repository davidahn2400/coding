#include <stdio.h>

#define N (10) // 배열의 크기 10으로 지정

int main(void) {
    int a[N]; // 배열 변수의 형태 지정
    int i; // 변수 지정

    printf("Enter %d numbers: ", N); // 배열의 크기가 10으로 지정되었으니 "Enter 10 numbers: "로 출력될 예정
    for (i = 0; i < N; ++i) { // i=0부터 N보다 작을때 까지 i 전위 증감연산 //++0
        scanf_s("%d", &a[i]); // a[0]
        printf("i는 : %d\n", i); // i = 0 이후 for문 반복되자마자(연산처리) 증감
    }

    printf("In reverse order:"); 
    for (i = N - 1; i >= 0; --i) { // i=N-1부터 0 이상일때 까지 i 전위 감소연산
        printf(" %d", a[i]); // ????
    }
    printf("\n"); // 줄바꿈

    return 0;
}
