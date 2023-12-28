#include <stdio.h>

int main(void) 
{
    int num, sun = 0;
    int cloud[10];

    for (int i = 0; i < 10; i++) 
    {
        scanf_s("%d", &num);

        cloud[i] = (num % 42);
    }

    for (int i = 0; i < 10; i++) 
    {
        int moon = 0;

        for (int j = i + 1; j < 10; j++) 
        { 
            if (cloud[i] == cloud[j]) moon++;
        }
        if (moon == 0) sun++; 
    }

    printf("%d", sun);
}