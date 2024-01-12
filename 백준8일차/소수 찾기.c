#include <stdio.h>

int main(void)
{
    int pn;
    int num = 0;
    int counting = 0;

    scanf_s("%d", &pn);
    for (int i = 0; i < pn; i++)
    {
        scanf_s("%d", &num);
        for (int j = 2; j <= num; j++)
        {
            if (num == j)
            {
                counting++;
            }
            if (num % j == 0)
            {
                break;
            }
        }
    }

    printf("%d", counting);

    return 0;

}