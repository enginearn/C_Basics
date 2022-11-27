#include <stdio.h>

int main(void)
{
    printf("%d+", 100);
    printf("%d=", 200);
    printf("%d\n", 300);

    printf("%d+%d=%d", 100, 200, 300);
    printf("%d+%d=%d", 100, 200, 100 + 200);

    printf("%d+%d=%d\n", 10, 3, 10 + 3);
    printf("%d-%d=%d\n", 10, 3, 10 - 3);
    printf("%dx%d=%d\n", 10, 3, 10 * 3);
    printf("%d÷%d=%d\n", 10, 3, 10 / 3);
    printf("%d%%%d=%d\n", 10, 3, 10 % 3);

    printf("(%d + %d) x %d ÷ %d = %d", 1, 100, 100, 2, (1 + 100) * 100 / 2);

    printf("%f+%f=%f\n", 10.0, 2.0, 10.0 + 2.0);
    printf("%f-%f=%f\n", 10.0, 2.0, 10.0 - 2.0);
    printf("%f*%f=%f\n", 10.0, 2.0, 10.0 * 2.0);
    printf("%f/%f=%f\n", 10.0, 3.0, 10.0 / 3.0);

    printf("0x5D=%d\n", 0x5D);          // 93
    printf("0x5d=%d\n", 0x5d);          // 93
    printf("023=%d\n", 023);            // 19
    printf("0b101=%d\n", 0b101);        // 5
    printf("%d\n", 0x5D + 023 + 0b101); // 117

    printf("%d / %d = %d ... %d\n", 10, 3, 10 / 3, 10 % 3);

    return 0;
}
