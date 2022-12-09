#include <stdio.h>

void line(void);

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%02d回目のHello World\n", i);
    }

    // 無限ループ
    // for (;;) {
    //     printf("Hello World\n");
    // }

    line();

    int i = 1;
    for (;;)
    {
        printf("%02d回目のHello World\n", i);
        i++;
        if (i > 3)
        {
            break;
        }
    }

    line();

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%02d * %02d = %02d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

void line(void)
{
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");
}
