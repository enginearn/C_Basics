#include <stdio.h>

int sum(int a, int b);
int sigma(int min, int max);
int olympic_year(int year);

int main(void)
{
    int a = 10, b = 20;
    int c = sum(a, b);
    printf("%d + %d = %d\n", a, b, c);

    int min = 1, max = 10;
    int d = sigma(min, max);
    printf("%dから%dまでの和は%dです\n", min, max, d);

    int year = 2020;
    int e = olympic_year(year);
    switch(e)
    {
        case 0:
            printf("%d年はオリンピック年ではありません\n", year);
            break;
        case 1:
            printf("%d年はオリンピック年です\n", year);
            break;
        default:
            printf("エラーです\n");
            break;
    }

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int sigma(int min, int max)
{
    return (min + max) * (max - min + 1) / 2;
}

int olympic_year(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return 1;
    else
        return 0;
}
